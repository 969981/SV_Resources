/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03447920; name: FUN_03447920
 */


void FUN_03447920(int *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  if (*(int *)(param_2 + 0x188) == 1) {
    lVar6 = *(long *)(param_2 + 0x180);
    uVar3 = *(uint *)(lVar6 + 0x120);
    local_60 = *(undefined8 *)(lVar6 + 0x138);
    uVar5 = uVar3;
    if ((*(uint *)(lVar6 + 0xb8) & 0xf00) != 0x300) {
      uVar5 = *(uint *)(lVar6 + 0xb8);
    }
  }
  else {
    local_60 = 0;
    uVar3 = 0x300;
    uVar5 = 0x300;
  }
  local_50 = param_2 + 0xc;
  lStack_48 = param_2 + 0x14;
  _local_58 = CONCAT44(uVar5,uVar3);
  lStack_38 = 0;
  if (*(long *)(param_2 + 0x198) != 0) {
    lStack_38 = *(long *)(param_2 + 0x198) + 0x90;
  }
  local_40 = param_2;
  local_70 = (**(code **)(**(long **)(param_2 + 400) + 0x10))();
  if (*param_1 == 0) {
    local_78 = 0;
    local_68 = 0;
    puVar9 = *(undefined8 **)PTR_DAT_047e6f40;
    iVar2 = *(int *)(*(long *)(*(long *)(*(long *)(param_2 + 400) + 8) + 0x170) + 0x18);
    nn::os::LockMutex((MutexType *)(puVar9 + 6));
    piVar4 = (int *)*puVar9;
    uVar5 = *(uint *)(puVar9 + 1);
    if ((uVar5 == 0) || (*piVar4 == iVar2)) {
      piVar7 = piVar4;
    }
    else {
      lVar6 = (ulong)uVar5 * 0x18;
      piVar8 = piVar4;
      do {
        lVar6 = lVar6 + -0x18;
        if (lVar6 == 0) goto LAB_03447a48;
        piVar7 = piVar8 + 6;
        piVar1 = piVar8 + 6;
        piVar8 = piVar7;
      } while (*piVar1 != iVar2);
    }
    if (piVar7 != piVar4 + (ulong)uVar5 * 6) {
      local_78 = *(undefined8 *)(piVar7 + 4);
      (**(code **)(piVar7 + 2))(&local_78);
    }
LAB_03447a48:
    nn::os::UnlockMutex((MutexType *)(puVar9 + 6));
  }
  else {
    FUN_034b3c14(*(undefined8 *)PTR_DAT_047e6f38,*param_1,&local_78);
  }
  return;
}


