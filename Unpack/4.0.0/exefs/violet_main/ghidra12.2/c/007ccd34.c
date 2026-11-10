/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ccd34; name: FUN_007ccd34
 */


void FUN_007ccd34(long *param_1,undefined8 *param_2)

{
  char cVar1;
  ushort uVar2;
  ulong uVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar4 = PTR_DAT_047d1198;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_0078f9d4();
  plVar15 = param_1 + 0x1d;
  *plVar15 = 0;
  param_1[0x1e] = 0;
  FUN_0078f9d4(plVar15);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_00cbd7c0(param_1 + 0x24,local_60);
  *(undefined2 *)(param_1 + 0x26) = 0;
  FUN_0284e338(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 1;
  FUN_007e5190(param_1 + 0x2f);
  FUN_007e5190(param_1 + 0x37);
  FUN_018dd988(param_1 + 0x3f);
  FUN_018dd980(param_1 + 0x3f);
  memset(param_1 + 0x50,0,0x10);
  FUN_018dd988(param_1 + 0x52);
  FUN_018dd980(param_1 + 0x52);
  memset(param_1 + 99,0,0x10);
  FUN_018dd988(param_1 + 0x65);
  FUN_018dd980(param_1 + 0x65);
  memset(param_1 + 0x76,0,0x10);
  FUN_018dd988(param_1 + 0x78);
  FUN_018dd980(param_1 + 0x78);
  memset(param_1 + 0x89,0,0x10);
  *(undefined2 *)(param_1 + 0x8b) = 0x100;
  FUN_018dd530((long)param_1 + 0x45c);
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)((long)param_1 + 0x472) = 0;
  *(undefined4 *)((long)param_1 + 0x474) = 0;
  plVar16 = (long *)*param_2;
  lVar8 = (**(code **)(*plVar16 + 0xe8))(plVar16,*(undefined2 *)(param_2 + 1));
  param_1[0xc] = lVar8;
  puVar4 = PTR_DAT_047d0860;
  *(undefined1 *)((long)param_1 + 0x471) = *(undefined1 *)((long)param_2 + 0xb);
  iVar6 = 0;
  if (*(char *)(*(long *)puVar4 + 0x38) == '\0') {
    lVar8 = *(long *)puVar4 + 0x10;
    puVar9 = (undefined8 *)FUN_018ff6bc(lVar8,0xa20);
    FUN_007d2de8();
    iVar6 = FUN_018ff788(lVar8,puVar9,0x98000000);
    if (iVar6 == *(int *)PTR_DAT_047d0e88) {
      (**(code **)*puVar9)(puVar9);
      FUN_018ff540(lVar8,puVar9);
    }
  }
  *(int *)((long)param_1 + 0xc) = iVar6;
  lVar8 = FUN_00f21488(*(long *)puVar4 + 0x10,iVar6,0x98);
  param_1[2] = lVar8;
  FUN_007d30d8(local_60,lVar8,plVar16);
  uVar18 = *(undefined8 *)PTR_DAT_047d11a0;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(*(long *)puVar4 + 0x50);
  cVar1 = *(char *)((long)param_2 + 10);
  *(char *)((long)param_1 + 0x472) = cVar1;
  bVar5 = cVar1 != '\0';
  lVar8 = (**(code **)(*plVar16 + 0xe0))(plVar16);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    PTR_DAT_047d0868[0x3cb] = *(undefined1 *)((long)param_1 + 0x471);
    plVar10 = (long *)(**(code **)(*plVar16 + 0xe0))(plVar16);
    uVar7 = (**(code **)(*plVar10 + 0x160))();
    if (cVar1 == '\0') {
      bVar5 = 0;
    }
    else {
      plVar16 = (long *)(**(code **)(*plVar16 + 0xe0))(plVar16);
      bVar5 = (**(code **)(*plVar16 + 0x160))();
    }
  }
  FUN_007dfce4(local_70,uVar18,(short)param_1[1],uVar7 & 1,bVar5 & 1);
  FUN_018ff39c(local_60,local_70);
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0x58,uVar18);
  if (lVar8 != 0) {
    FUN_007e4c04(lVar8);
  }
  param_1[5] = lVar8;
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0xd8,uVar18);
  if (lVar8 != 0) {
    FUN_007d0a18(lVar8);
  }
  param_1[6] = lVar8;
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0xa0,uVar18);
  if (lVar8 != 0) {
    FUN_007cf5a0(lVar8);
  }
  param_1[7] = lVar8;
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0x90,uVar18);
  if (lVar8 != 0) {
    FUN_007cfbd4(lVar8);
  }
  param_1[8] = lVar8;
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0xb0,uVar18);
  if (lVar8 != 0) {
    FUN_007d0260(lVar8);
  }
  param_1[9] = lVar8;
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0xc0,uVar18);
  if (lVar8 != 0) {
    FUN_007cdf08(lVar8);
  }
  param_1[10] = lVar8;
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0x98,uVar18);
  if (lVar8 != 0) {
    FUN_007e5bdc(lVar8);
  }
  uVar2 = *(ushort *)(param_1 + 1);
  uVar3 = (ulong)uVar2 * 3;
  param_1[0xb] = lVar8;
  uVar18 = FUN_0078a12c();
  puVar9 = (undefined8 *)FUN_007bf9f0((ulong)uVar2 * 0x18,uVar18);
  if (puVar9 == (undefined8 *)0x0) {
    param_1[0x22] = 0;
  }
  else {
    if (uVar2 != 0) {
      uVar11 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar14 = puVar9 + 2;
        do {
          uVar13 = uVar13 + 4;
          puVar14[-2] = 0;
          puVar14[-1] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14 = puVar14 + 4;
        } while ((uVar3 & 0x3fffc) != uVar13);
      }
      if (uVar11 != 0) {
        puVar14 = puVar9 + uVar13;
        do {
          uVar11 = uVar11 - 1;
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        } while (uVar11 != 0);
      }
    }
    uVar2 = *(ushort *)(param_1 + 1);
    param_1[0x22] = (long)puVar9;
    if (uVar2 != 0) {
      param_1[0x20] = (long)puVar9;
      *(uint *)(param_1 + 0x21) = (uint)uVar2;
      *puVar9 = 0;
      puVar9[1] = 0;
      FUN_0078f9e0(plVar15,plVar15,(long)*(int *)((long)param_1 + 0xfc) + (long)puVar9);
      if (uVar2 != 1) {
        lVar8 = 0;
        lVar17 = (ulong)uVar2 - 1;
        do {
          lVar12 = param_1[0x20];
          puVar9 = (undefined8 *)(lVar12 + lVar8 + 0x18);
          *puVar9 = 0;
          *(undefined8 *)(lVar12 + lVar8 + 0x20) = 0;
          FUN_0078f9e0(plVar15,plVar15,(long)*(int *)((long)param_1 + 0xfc) + (long)puVar9);
          lVar8 = lVar8 + 0x18;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
  }
  uVar18 = FUN_0078a12c();
  lVar8 = FUN_007bf9f0(0x30,uVar18);
  if (lVar8 != 0) {
    FUN_0078ca60(lVar8);
  }
  param_1[0x15] = lVar8;
  memset(param_1 + 0x11,0,0x20);
  return;
}


