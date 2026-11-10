/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9b430; name: FUN_02e9b430
 */


void FUN_02e9b430(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 + 0x98;
  if ((param_2 & 1) != 0) {
    FUN_02ea3128(param_1,0,0,FUN_02e9bc30,"convexVsConvex",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x201) == 0) {
    FUN_02ea3128(param_1,0,9,&LAB_02e9bfd0,"convexVsCompressedMesh",param_2,0);
    FUN_02ea3128(param_1,9,0,&LAB_02e9bfe0,"flip<convexVsCompressedMesh>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x401) == 0) {
    FUN_02ea3128(param_1,0,10,&LAB_02e9c160,"convexVsExternMesh",param_2,0);
    FUN_02ea3128(param_1,10,0,&LAB_02e9c170,"flip<convexVsExternMesh>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x101) == 0) {
    FUN_02ea3128(param_1,0,8,&LAB_02e9c2f0,"convexVsMesh",param_2,0);
    FUN_02ea3128(param_1,8,0,&LAB_02e9c300,"flip<convexVsMesh>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x1001) == 0) {
    FUN_02ea3128(param_1,0,0xc,&LAB_02e9c480,"convexVsCompound",param_2,0);
    FUN_02ea3128(param_1,0xc,0,&LAB_02e9c490,"flip<convexVsCompound>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x4001) == 0) {
    FUN_02ea3128(param_1,0,0xe,&LAB_02e9c610,"convexVsHeightField",param_2,0);
    FUN_02ea3128(param_1,0xe,0,&LAB_02e9c620,"flip<convexVsHeightField>",param_2,0);
  }
  if ((~param_2 & 0x10001) == 0) {
    FUN_02ea3128(param_1,0,0x10,&LAB_02e9c7a0,"convexVsParticleSystem",param_2,0);
    FUN_02ea3128(param_1,0x10,0,&LAB_02e9c7b0,"flip<convexVsParticleSystem>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x480) == 0) {
    FUN_02ea3128(param_1,10,7,FUN_02e9c930,"externMeshVsShape",param_2,0);
    FUN_02ea3128(param_1,7,10,&LAB_02e9cee0,"flip<externMeshVsShape>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x8400) == 0) {
    FUN_02ea3128(param_1,10,0xf,FUN_02e9c930,"externMeshVsShape",param_2,0);
    FUN_02ea3128(param_1,0xf,10,&LAB_02e9cee0,"flip<externMeshVsShape>",param_2,0);
  }
  if ((~param_2 & 0x180) == 0) {
    FUN_02ea3128(param_1,8,7,FUN_02e9d060,"compositeVsShape",param_2,0);
    FUN_02ea3128(param_1,7,8,&LAB_02e9d4f0,"flip<compositeVsShape>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x8100) == 0) {
    FUN_02ea3128(param_1,8,0xf,FUN_02e9d060,"compositeVsShape",param_2,0);
    FUN_02ea3128(param_1,0xf,8,&LAB_02e9d4f0,"flip<compositeVsShape>",param_2,0);
  }
  if ((param_2 >> 9 & 1) != 0) {
    FUN_02ea3128(param_1,9,9,&LAB_02e9d670,"compressedMeshVsCompressedMesh",param_2,0);
  }
  if ((param_2 >> 0xe & 1) != 0) {
    FUN_02ea3128(param_1,0xe,0xe,&LAB_02e9d680,"heightFieldVsHeightfield",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x4200) == 0) {
    FUN_02ea3128(param_1,0xe,9,&LAB_02e9d690,"heightFieldVsCompressedMesh",param_2,0);
    FUN_02ea3128(param_1,9,0xe,&LAB_02e9d6a0,"flip<heightFieldVsCompressedMesh>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x1080) == 0) {
    FUN_02ea3128(param_1,0xc,7,FUN_02e9d820,"compoundVsShape",param_2,0);
    FUN_02ea3128(param_1,7,0xc,FUN_02e9dd30,"flip<compoundVsShape>",param_2,0);
  }
  if ((param_2 >> 0xc & 1) != 0) {
    FUN_02ea3128(param_1,0xc,0xc,&LAB_02e9deb0,"compoundVsCompound",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x10080) == 0) {
    FUN_02ea3128(param_1,0x10,7,FUN_02e9e080,"particlesVsShape",param_2,0);
    FUN_02ea3128(param_1,7,0x10,&LAB_02e9e5a0,"flip<particlesVsShape>",param_2,0);
  }
  if (((param_2 ^ 0xffffffff) & 0x11000) == 0) {
    FUN_02ea3128(param_1,0x10,0xc,FUN_02e9e080,"particlesVsShape",param_2,0);
    FUN_02ea3128(param_1,0xc,0x10,&LAB_02e9e5a0,"flip<particlesVsShape>",param_2,0);
  }
  uVar2 = 0;
  do {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if (((uVar1 | 0x20000) & (param_2 ^ 0xffffffff)) == 0) {
      FUN_02ea3128(param_1,0x11,uVar2,&LAB_02e9e720,"ScaledQuery",param_2,0);
      FUN_02ea3128(param_1,uVar2,0x11,&LAB_02e9e920,"ScaledTarget",param_2,0);
    }
    if (((uVar1 | 0x40000) & (param_2 ^ 0xffffffff)) == 0) {
      FUN_02ea3128(param_1,0x12,uVar2,&LAB_02e9eb10,"UnwrapMaskedQuery",param_2,0);
      FUN_02ea3128(param_1,uVar2,0x12,&LAB_02e9ecf0,"UnwrapMaskedTarget",param_2,0);
    }
    if (((uVar1 | 0x200000) & (param_2 ^ 0xffffffff)) == 0) {
      FUN_02ea3128(param_1,0x15,uVar2,&LAB_02e9eed0,"LodQuery",param_2,0);
      FUN_02ea3128(param_1,uVar2,0x15,&LAB_02e9f130,"LodTarget",param_2,0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x1f);
  if ((param_2 >> 0x12 & 1) != 0) {
    FUN_02ea3128(param_1,0x12,0x12,&LAB_02e9f390,"UnwrapQueryAndTarget",param_2,0);
  }
  if ((param_2 >> 0x15 & 1) != 0) {
    FUN_02ea3128(param_1,0x15,0x15,&LAB_02e9f5a0,"LodQueryAndTarget",param_2,0);
  }
  if ((param_2 >> 0x11 & 1) == 0) {
    return;
  }
  FUN_02ea3128(param_1,0x11,0x11,&LAB_02e9f850,"ScaleQueryAndTarget",param_2,0);
  return;
}


