#' SelectCF package
#'
#' A package for accurate and robust feature selection coupled with clustering.
#'
#' This package includes five novel algorithms for feature selection coupled with clustering. Briefly, we advance SHC (Sparse Hierarchical Clustering) and obtain two algorithms: SelectCF-FL (Selector of Clustering Featuers using Fused LASSO penalty), which replaces lasso with fused lasso to incorporate prior information of feature order, and SelectCF (Selector of Clustering Featuers), which replaces lasso with spike-and-slab lasso to debias the effect of lasso without a priori information. Further, rSHC, rSelectCF-FL, and rSelectCF, are robust versions of SHC, SelectCF-FL, and SelectCF, respectively, in which selected features are robust to the existence of outliers. 
#'
#' @name SelectCF-package
#' @docType package
#' @references
#' Li X. and Korkut A. (2021) Unsupervised feature selection in clustering of bulk and single-cell omics data.
#' @keywords package
#' @useDynLib SelectCF
#' @importFrom graphics lines plot
#' @importFrom stats as.dist hclust rnorm runif sd var
NULL

