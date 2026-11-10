/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084f3cc; name: FUN_0084f3cc
 */


void FUN_0084f3cc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_28;
  
  puVar5 = PTR_DAT_047d1b98;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = 0xffffffff;
  puVar5 = PTR_DAT_047d1a08;
  local_28 = 0x200;
  puVar6 = (undefined2 *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  pcVar7 = *(code **)(puVar5 + 0x10);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(puVar6,"hkgpConvexHullImpl");
  }
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 0xc) = 0;
  *puVar6 = 1;
  puVar6[6] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined8 *)(puVar6 + 2) = 0x10001003f7fff58;
  puVar1 = PTR_DAT_047d1ba0 + 0x10;
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x14) = 0;
  *(undefined **)(puVar6 + 0x1c) = puVar1;
  *(undefined8 *)(puVar6 + 0x20) = 0xffffffff;
  *(undefined8 *)(puVar6 + 0x24) = 1;
  *(undefined4 *)(puVar6 + 0x30) = 0;
  *(undefined8 *)(puVar6 + 0x28) = 0;
  *(undefined8 *)(puVar6 + 0x2c) = 0;
  *(undefined8 *)(puVar6 + 0x34) = 0;
  *(undefined8 *)(puVar6 + 0x38) = 0;
  *(undefined8 *)(puVar6 + 0x40) = 0;
  *(undefined8 *)(puVar6 + 0x44) = 0x8000000000000000;
  *(undefined8 *)(puVar6 + 0x48) = 0;
  *(undefined8 *)(puVar6 + 0x4c) = 0x8000000000000000;
  *(undefined8 *)(puVar6 + 0x50) = 0;
  *(undefined8 *)(puVar6 + 0x54) = 0x8000000000000000;
  puVar1 = PTR_DAT_047d1ba8;
  *(undefined4 *)(puVar6 + 0x3c) = 0;
  do {
    iVar2 = *(int *)puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(int *)puVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(int *)(puVar6 + 0xfc) = iVar2;
  FUN_0085c61c();
  *(undefined4 *)(puVar6 + 0x4c) = 0;
  puVar1 = PTR_DAT_047d19b0;
  *(undefined4 *)(puVar6 + 0x44) = 0;
  *(undefined4 *)(puVar6 + 0x54) = 0;
  uVar10 = *(undefined8 *)(puVar1 + 0x228);
  uVar9 = *(undefined8 *)(puVar1 + 0x220);
  uVar11 = *(undefined8 *)(puVar1 + 0x230);
  *(undefined8 *)(puVar6 + 0xcc) = *(undefined8 *)(puVar1 + 0x238);
  *(undefined8 *)(puVar6 + 200) = uVar11;
  *(undefined8 *)(puVar6 + 0xd4) = 0;
  *(undefined8 *)(puVar6 + 0xd0) = 0;
  uVar11 = *(undefined8 *)(puVar1 + 0x248);
  lVar8 = *(long *)(puVar1 + 0x240);
  *(undefined8 *)(puVar6 + 0x8c) = 0;
  *(undefined8 *)(puVar6 + 0x88) = 0;
  *(undefined8 *)(puVar6 + 0xc4) = uVar10;
  *(undefined8 *)(puVar6 + 0xc0) = uVar9;
  fVar13 = -(float)((ulong)lVar8 >> 0x20);
  fVar14 = -(float)((ulong)uVar11 >> 0x20);
  *(undefined8 *)(puVar6 + 0xec) = uVar10;
  *(undefined8 *)(puVar6 + 0xe8) = uVar9;
  *(undefined8 *)(puVar6 + 0xf0) = 0;
  *(undefined8 *)(puVar6 + 0xf4) = 0;
  puVar6[0xfe] = 0;
  *(undefined1 *)(puVar6 + 0xff) = 0;
  *(undefined4 *)(puVar6 + 0xfa) = 0;
  *(undefined4 *)(puVar6 + 0xf8) = 0xffffffff;
  *(undefined8 *)(puVar6 + 0x90) = 0;
  *(undefined8 *)(puVar6 + 0x94) = 0;
  *(undefined8 *)(puVar6 + 0x98) = 0;
  *(undefined8 *)(puVar6 + 0x9c) = 0;
  *(undefined8 *)(puVar6 + 0xa0) = 0;
  *(undefined8 *)(puVar6 + 0xa4) = 0;
  *(undefined8 *)(puVar6 + 0xa8) = 0;
  *(undefined8 *)(puVar6 + 0xac) = 0;
  *(undefined8 *)(puVar6 + 0x6c) = uVar11;
  *(long *)(puVar6 + 0x68) = lVar8;
  *(ulong *)(puVar6 + 0x74) = CONCAT44(fVar14,-(float)uVar11);
  *(ulong *)(puVar6 + 0x70) = CONCAT44(fVar13,-(float)lVar8);
  *(long *)(puVar6 + 0x5c) = lVar8 << 0x20;
  *(undefined8 *)(puVar6 + 0x58) = 0;
  *(long *)(puVar6 + 100) = lVar8 << 0x20;
  *(undefined8 *)(puVar6 + 0x60) = 0;
  *(undefined8 *)(puVar6 + 0x7c) = uVar11;
  *(long *)(puVar6 + 0x78) = lVar8;
  *(ulong *)(puVar6 + 0x84) = CONCAT44(fVar14,-(float)uVar11);
  *(ulong *)(puVar6 + 0x80) = CONCAT44(fVar13,-(float)lVar8);
  uVar10 = *(undefined8 *)(puVar1 + 0x208);
  uVar9 = *(undefined8 *)(puVar1 + 0x200);
  uVar12 = *(undefined8 *)(puVar1 + 0x218);
  uVar11 = *(undefined8 *)(puVar1 + 0x210);
  *(undefined8 *)(puVar6 + 0xb4) = uVar10;
  *(undefined8 *)(puVar6 + 0xb0) = uVar9;
  *(undefined8 *)(puVar6 + 0xbc) = uVar12;
  *(undefined8 *)(puVar6 + 0xb8) = uVar11;
  *(undefined8 *)(puVar6 + 0xdc) = uVar10;
  *(undefined8 *)(puVar6 + 0xd8) = uVar9;
  *(undefined8 *)(puVar6 + 0xe4) = uVar12;
  *(undefined8 *)(puVar6 + 0xe0) = uVar11;
  lVar8 = param_1[3];
  param_1[3] = (long)puVar6;
  if (lVar8 != 0) {
    FUN_0085eb5c(lVar8);
    (**(code **)(puVar5 + 8))(0,lVar8,0);
    puVar6 = (undefined2 *)param_1[3];
  }
  *(long **)(puVar6 + 0x18) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


