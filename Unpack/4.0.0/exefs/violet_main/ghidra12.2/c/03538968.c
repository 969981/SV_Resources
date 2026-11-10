/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03538968; name: FUN_03538968
 */


void FUN_03538968(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x140);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 8) == 0)) {
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x60) + 0x30);
    if ((*param_3 != 0) && (*param_3 != lVar3)) {
      return;
    }
    if (param_4 != (undefined8 *)0x0) {
      local_48 = 0;
      local_40 = 0;
      local_38 = 0xff;
      local_30 = 0xff;
      local_28 = 0;
      local_50 = lVar3;
      uVar2 = (**(code **)*param_4)(param_4,&local_50);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = iVar1;
    FUN_035387bc(param_1);
    FUN_03533abc(*(undefined8 *)(param_1 + 8),param_1);
  }
  return;
}


