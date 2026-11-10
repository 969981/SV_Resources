/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351f4a4; name: FUN_0351f4a4
 */


int FUN_0351f4a4(long param_1,long param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_54;
  int *local_50;
  ulong local_48;
  long local_28;
  
  *param_4 = 0;
  local_50 = (int *)0x0;
  local_48 = 0;
  lVar3 = *(long *)(*(long *)(param_2 + 0x108) + 0x18);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x78);
  }
  FUN_035249e4(uVar2,param_3,&local_50);
  if ((int)local_48 == 0) {
    iVar5 = 3;
  }
  else {
    if (*local_50 == 0) {
      iVar5 = 2;
      goto LAB_0351f5a0;
    }
    iVar5 = 1;
    piVar4 = local_50;
    do {
      local_54 = 0;
      iVar1 = FUN_035316d0(param_2,*(long *)(param_1 + 8) -
                                   *(long *)(*(long *)(param_1 + 0x10) + 0x68),*piVar4,&local_54,0,0
                           ,&local_28);
      if (iVar1 == 1) {
        if ((iVar5 == 1) || (local_28 < *param_4)) {
          iVar5 = 0;
          *param_4 = local_28;
        }
        else {
          iVar5 = 0;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != local_50 + (local_48 & 0xffffffff));
  }
  if (local_50 == (int *)0x0) {
    return iVar5;
  }
LAB_0351f5a0:
  local_48 = local_48 & 0xffffffff00000000;
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,local_50);
  return iVar5;
}


