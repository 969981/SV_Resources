/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03530468; name: FUN_03530468
 */


void FUN_03530468(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  int *local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_0353059c(&local_50);
  uVar5 = local_44;
  piVar4 = local_50;
  if (local_50 != (int *)0x0) {
    *local_50 = *local_50 + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar7 = *(uint *)(param_1 + 0x4c);
  if (uVar3 < uVar7) {
LAB_035304e8:
    if (uVar7 <= uVar3) goto LAB_03530524;
    uVar7 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar7 + 1;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_03530524;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)uVar7 * 0x10);
    *puVar2 = piVar4;
    *(undefined4 *)(puVar2 + 1) = local_48;
    *(undefined4 *)((long)puVar2 + 0xc) = uVar5;
    if (piVar4 == (int *)0x0) goto LAB_03530550;
    *piVar4 = *piVar4 + 1;
  }
  else {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                      (0,*(undefined8 *)(param_1 + 0x40),(ulong)uVar7 << 4);
    if (lVar6 != 0) {
      *(long *)(param_1 + 0x40) = lVar6;
      *(uint *)(param_1 + 0x4c) = uVar7;
      goto LAB_035304e8;
    }
LAB_03530524:
    if (piVar4 == (int *)0x0) goto LAB_03530550;
  }
  iVar1 = *piVar4;
  *piVar4 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(uVar5,piVar4);
  }
LAB_03530550:
  FUN_0352f528(param_1);
  if ((local_50 != (int *)0x0) && (iVar1 = *local_50, *local_50 = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(local_44);
  }
  return;
}


