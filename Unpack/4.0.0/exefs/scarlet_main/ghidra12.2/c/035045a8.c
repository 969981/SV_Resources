/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035045a8; name: FUN_035045a8
 */


undefined8
FUN_035045a8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  byte bVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_38 [4];
  undefined1 auStack_34 [4];
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  FUN_0348b314((long *)(param_1 + 0x60),param_5);
  *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) & 0xfc | *(long *)(param_1 + 0x60) == 0;
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x70);
    if (lVar14 == 0) {
      return 2;
    }
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x1b8);
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0x34;
    }
    FUN_0346d39c(plVar6,lVar14,*(undefined8 *)(param_1 + 0x60),0);
    puVar3 = PTR_DAT_047e7468;
    plVar6[9] = 0;
    plVar6[0x35] = 0;
    plVar6[0x36] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    *(long **)(param_1 + 8) = plVar6;
    puVar3 = PTR_DAT_047e6f40;
    puVar15 = *(undefined8 **)PTR_DAT_047e6f40;
    iVar2 = *(int *)(plVar6[0x2e] + 0x18);
    nn::os::LockMutex((MutexType *)(puVar15 + 6));
    piVar10 = (int *)*puVar15;
    uVar9 = *(uint *)(puVar15 + 1);
    if ((uVar9 == 0) || (*piVar10 == iVar2)) {
      piVar12 = piVar10;
    }
    else {
      lVar14 = (ulong)uVar9 * 0x18;
      piVar11 = piVar10;
      do {
        lVar14 = lVar14 + -0x18;
        if (lVar14 == 0) {
          piVar12 = piVar10 + (ulong)uVar9 * 6;
          break;
        }
        piVar12 = piVar11 + 6;
        piVar1 = piVar11 + 6;
        piVar11 = piVar12;
      } while (*piVar1 != iVar2);
    }
    nn::os::UnlockMutex((MutexType *)(puVar15 + 6));
    *(byte *)(param_1 + 0x88) =
         *(byte *)(param_1 + 0x88) & 0xfd | (piVar12 != piVar10 + (ulong)uVar9 * 6) << 1;
    lVar14 = *(long *)puVar3;
    iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x170) + 0x18);
    nn::os::LockMutex((MutexType *)(lVar14 + 0x30));
    piVar10 = *(int **)(lVar14 + 0x10);
    uVar9 = *(uint *)(lVar14 + 0x18);
    if ((uVar9 == 0) || (*piVar10 == iVar2)) {
      piVar12 = piVar10;
    }
    else {
      lVar8 = (ulong)uVar9 * 0x20;
      piVar11 = piVar10;
      do {
        lVar8 = lVar8 + -0x20;
        if (lVar8 == 0) goto LAB_03504874;
        piVar12 = piVar11 + 8;
        piVar1 = piVar11 + 8;
        piVar11 = piVar12;
      } while (*piVar1 != iVar2);
    }
    if (piVar12 == piVar10 + (ulong)uVar9 * 8) {
LAB_03504874:
      bVar13 = 0;
    }
    else {
      bVar13 = (*(byte *)(piVar12 + 4) & 0x1f) << 2;
    }
    nn::os::UnlockMutex((MutexType *)(lVar14 + 0x30));
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0x83 | bVar13;
    *(long *)(*(long *)(param_1 + 8) + 0x1a8) = param_1;
    local_38[0] = 0;
    uVar7 = FUN_0346db58(0xbf800000,*(undefined8 *)(param_1 + 8),0,1,auStack_34,0,local_38);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x40))();
    if ((int)uVar7 != 1) {
      return uVar7;
    }
    local_80 = 0xff00;
    local_88 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0x100000000;
    uStack_58 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x50))(*(long **)(param_1 + 8),&local_88,1);
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x170);
    (**(code **)(*plVar6 + 0x148))(plVar6,&local_88,*(long *)(param_1 + 8) + 0x50,1);
    lVar14 = *(long *)(*(long *)(param_1 + 8) + 0xf0);
    if (lVar14 != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x170);
      do {
        if (*(long *)(lVar8 + 0x88) != 0) {
          lVar8 = *(long *)(lVar8 + 0x88) + 0x38;
          goto LAB_03504990;
        }
        lVar8 = *(long *)(lVar8 + 0x98);
      } while (lVar8 != 0);
      lVar8 = 0;
LAB_03504990:
      FUN_034b2e64(*(undefined8 *)PTR_DAT_047e7040,lVar14,lVar8);
    }
    lVar14 = *(long *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x158) = param_3;
  *(undefined4 *)(param_1 + 0x198) = 4;
  if (lVar14 == 0) {
LAB_035047d4:
    sVar5 = 0;
    uVar9 = (uint)*(byte *)(param_1 + 0x194);
    sVar4 = 0;
    if (*(short *)(param_1 + 400) == 0) goto LAB_035047f0;
  }
  else {
    if (((*(long *)(lVar14 + 0xf8) != 0) && ((param_3 & 0xf00) != 0x300)) &&
       (*(int *)(*(long *)(lVar14 + 0xf8) + 4) != 0)) {
      puVar15 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x70);
      if (puVar15 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x178) = 0;
        return 0x34;
      }
      *(undefined1 *)(puVar15 + 6) = 0xff;
      *(undefined1 *)(puVar15 + 7) = 0xff;
      *puVar15 = &PTR_LAB_047c6650;
      puVar15[1] = 0;
      *(undefined4 *)(puVar15 + 5) = 0;
      *(undefined4 *)(puVar15 + 4) = 0;
      puVar15[0xc] = 0;
      *(undefined4 *)(puVar15 + 0xd) = 0xffffffff;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      lVar14 = *(long *)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x178) = puVar15;
      if (lVar14 == 0) goto LAB_035047d4;
    }
    sVar5 = FUN_034ad214(lVar14,*(undefined8 *)(param_1 + 0x70));
    uVar9 = (uint)*(byte *)(param_1 + 0x194);
    sVar4 = sVar5;
    if ((sVar5 != 0) != (*(short *)(param_1 + 400) == 0)) goto LAB_035047f0;
  }
  sVar5 = sVar4;
  uVar9 = uVar9 | 2;
  *(char *)(param_1 + 0x194) = (char)uVar9;
LAB_035047f0:
  *(short *)(param_1 + 400) = sVar5;
  if (((uVar9 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
  }
  return 1;
}


