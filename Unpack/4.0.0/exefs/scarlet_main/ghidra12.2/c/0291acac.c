/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291acac; name: FUN_0291acac
 */


void FUN_0291acac(long param_1,long param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *local_70;
  long *plStack_68;
  
  uVar9 = FUN_0291afb8();
  if ((uVar9 & 1) != 0) {
    uVar10 = FUN_00f7e284(*(undefined8 *)(param_1 + 0x48));
    uVar11 = FUN_00f7e27c(*(undefined8 *)(param_1 + 0x48));
    plVar13 = *(long **)(param_1 + 0x60);
    uVar3 = (**(code **)(*plVar13 + 0x98))(plVar13);
    uVar4 = FUN_011e2da8(uVar11,uVar3);
    uVar10 = FUN_015b5634(uVar10,uVar4);
    uVar5 = FUN_00f7e274();
    uVar6 = FUN_01255b6c(uVar10,uVar3);
    uVar7 = FUN_010f9114(uVar11,uVar4);
    if ((int)uVar7 < (int)(uVar5 & 0xff)) {
      do {
        plVar12 = (long *)FUN_0124e4c0(uVar10,uVar7);
        if (((uVar6 & 0xff) == uVar7) ||
           (uVar9 = (**(code **)(*plVar12 + 0x208))(plVar12), (uVar9 & 1) == 0)) {
          bVar2 = *(byte *)(param_2 + 0x60);
          uVar3 = (**(code **)(*plVar12 + 0x98))(plVar12);
          puVar1 = (undefined4 *)(param_2 + (ulong)bVar2 * 0x10);
          *puVar1 = uVar3;
          *(char *)(puVar1 + 1) = (char)uVar7;
          *(undefined1 *)(puVar1 + 3) = 0;
        }
        else {
          bVar2 = *(byte *)(param_2 + 0x60);
          local_70 = plVar13;
          plStack_68 = plVar12;
          iVar8 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                            (*(long **)(param_1 + 0x38),&local_70);
          uVar3 = (**(code **)(*plVar12 + 0x98))(plVar12);
          puVar1 = (undefined4 *)(param_2 + (ulong)bVar2 * 0x10);
          *puVar1 = uVar3;
          *(char *)(puVar1 + 1) = (char)uVar7;
          puVar1[2] = iVar8;
          *(bool *)(puVar1 + 3) = 0 < iVar8;
          *(char *)(param_2 + 0x60) = *(char *)(param_2 + 0x60) + '\x01';
        }
        uVar7 = uVar7 + 1;
      } while ((uVar5 & 0xff) != uVar7);
    }
  }
  return;
}


