/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192f024; name: FUN_0192f024
 */


void FUN_0192f024(long param_1,char *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  
  lVar7 = FUN_015b5634(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),
                       *(undefined1 *)(param_1 + 0x1a4));
  uVar10 = (ulong)*(byte *)(lVar7 + 0x30);
  if (*(byte *)(lVar7 + 0x30) == 0) {
    return;
  }
  uVar11 = 0;
  uVar14 = 0;
  pbVar12 = PTR_DAT_047d3f00;
  puVar17 = (undefined8 *)PTR_DAT_047d3f08;
LAB_0192f080:
  if (((((uint)uVar11 & 0xff) < (uint)uVar10) &&
      (plVar13 = *(long **)(lVar7 + uVar11 * 8), plVar13 != (long *)0x0)) &&
     (param_2[uVar11 + 1] != '\0')) {
    FUN_0192f43c(*(undefined8 *)(param_1 + 0x30),plVar13);
    puVar8 = (undefined8 *)(**(code **)plVar13[5])();
    if (((*pbVar12 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar12), iVar6 != 0)) {
      uVar15 = FUN_01b07aa4();
      *puVar17 = uVar15;
      __cxa_guard_release(pbVar12);
    }
    for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      if (puVar8 == puVar17) {
        lVar16 = plVar13[9];
        puVar17 = (undefined8 *)(lVar16 + 0x28);
        puVar17 = (undefined8 *)(**(code **)*puVar17)(puVar17);
        if (((*PTR_DAT_047dcd50 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar6 != 0)) {
          uVar15 = FUN_01af5520();
          *(undefined8 *)PTR_DAT_047dcd58 = uVar15;
          __cxa_guard_release(PTR_DAT_047dcd50);
        }
        goto LAB_0192f134;
      }
    }
    goto LAB_0192f394;
  }
  goto LAB_0192f0a0;
LAB_0192f134:
  if (puVar17 == (undefined8 *)0x0) goto LAB_0192f3cc;
  if (puVar17 == (undefined8 *)PTR_DAT_047dcd58) {
    lVar16 = *(long *)(lVar16 + 0x48);
    goto LAB_0192f14c;
  }
  puVar17 = (undefined8 *)*puVar17;
  goto LAB_0192f134;
LAB_0192f3cc:
  lVar16 = 0;
LAB_0192f14c:
  lVar9 = (**(code **)(**(long **)(param_1 + 0x1b8) + 0x68))(*(long **)(param_1 + 0x1b8),uVar14);
  uVar3 = FUN_00eedbc8(*(undefined8 *)(lVar9 + 0x70),0);
  uVar4 = FUN_00eedbc8(*(undefined8 *)(lVar16 + 0x70),0);
  bVar2 = false;
  if (((uVar3 & 0xffff) != 0xa6) && ((uVar3 & 0xffff) != (uVar4 & 0xffff))) {
    uVar5 = FUN_00cf5fe0(uVar3,0);
    FUN_00eee5f0(*(undefined8 *)(lVar16 + 0x70),0,uVar3);
    FUN_00eee290(*(undefined8 *)(lVar16 + 0x70),0,0);
    FUN_00eedf30(*(undefined8 *)(lVar16 + 0x70),0,uVar5);
    bVar2 = true;
  }
  uVar3 = FUN_00eedbc8(*(undefined8 *)(lVar9 + 0x70),1);
  uVar4 = FUN_00eedbc8(*(undefined8 *)(lVar16 + 0x70),1);
  if (((uVar3 & 0xffff) != 0xa6) && ((uVar3 & 0xffff) != (uVar4 & 0xffff))) {
    uVar5 = FUN_00cf5fe0(uVar3,0);
    bVar2 = true;
    FUN_00eee5f0(*(undefined8 *)(lVar16 + 0x70),1,uVar3);
    FUN_00eee290(*(undefined8 *)(lVar16 + 0x70),1,0);
    FUN_00eedf30(*(undefined8 *)(lVar16 + 0x70),1,uVar5);
  }
  uVar3 = FUN_00eedbc8(*(undefined8 *)(lVar9 + 0x70),2);
  uVar4 = FUN_00eedbc8(*(undefined8 *)(lVar16 + 0x70),2);
  if (((uVar3 & 0xffff) != 0xa6) && ((uVar3 & 0xffff) != (uVar4 & 0xffff))) {
    uVar5 = FUN_00cf5fe0(uVar3,0);
    FUN_00eee5f0(*(undefined8 *)(lVar16 + 0x70),2,uVar3);
    FUN_00eee290(*(undefined8 *)(lVar16 + 0x70),2,0);
    FUN_00eedf30(*(undefined8 *)(lVar16 + 0x70),2,uVar5);
    bVar2 = true;
  }
  uVar3 = FUN_00eedbc8(*(undefined8 *)(lVar9 + 0x70),3);
  uVar4 = FUN_00eedbc8(*(undefined8 *)(lVar16 + 0x70),3);
  if (((uVar3 & 0xffff) == 0xa6) || ((uVar3 & 0xffff) == (uVar4 & 0xffff))) {
    pbVar12 = PTR_DAT_047d3f00;
    puVar17 = (undefined8 *)PTR_DAT_047d3f08;
    if (!bVar2) goto LAB_0192f394;
  }
  else {
    uVar5 = FUN_00cf5fe0(uVar3,0);
    FUN_00eee5f0(*(undefined8 *)(lVar16 + 0x70),3,uVar3);
    FUN_00eee290(*(undefined8 *)(lVar16 + 0x70),3,0);
    FUN_00eedf30(*(undefined8 *)(lVar16 + 0x70),3,uVar5);
  }
  puVar17 = (undefined8 *)PTR_DAT_047d3f08;
  pbVar12 = PTR_DAT_047d3f00;
  (**(code **)(*plVar13 + 0x630))(plVar13);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = (**(code **)(*plVar13 + 0x98))(plVar13);
  FUN_0192f468(uVar15,uVar5);
LAB_0192f394:
  if (*param_2 != '\0') {
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = (**(code **)(*plVar13 + 0x98))(plVar13);
    FUN_0192f4bc(uVar15,uVar1,uVar5);
  }
LAB_0192f0a0:
  uVar10 = (ulong)*(byte *)(lVar7 + 0x30);
  uVar11 = uVar11 + 1;
  uVar14 = uVar11 & 0xffffffff;
  if (uVar10 <= uVar11) {
    return;
  }
  goto LAB_0192f080;
}


