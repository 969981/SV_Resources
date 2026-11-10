/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f618f0; name: FUN_02f618f0
 */


void FUN_02f618f0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long local_58;
  undefined8 *local_50;
  uint *local_48;
  uint local_40;
  uint local_3c;
  
  local_48 = *(uint **)(*(long *)(param_1 + 0x550) + (long)*(int *)(param_1 + 0x558) * 8 + -8);
  local_58 = param_1 + 0x540;
  local_40 = *local_48 >> 0x10;
  local_3c = *local_48 & 0xffff;
  *(uint *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) - (*local_48 & 0xffff);
  local_50 = param_3;
  FUN_02f51d50(*(undefined8 *)(param_2 + 0x508),param_2,param_4,&local_58);
  puVar3 = local_50;
  if (local_3c == 0) {
    piVar5 = (int *)(local_58 + 0x18);
    iVar1 = *piVar5;
    if (1 < iVar1) {
      iVar2 = *(int *)(local_50 + 0xb);
      lVar6 = *(long *)(*(long *)(local_58 + 0x10) + (long)(iVar1 + -2) * 8);
      lVar4 = local_50[1];
      *(undefined8 *)(lVar4 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(local_58 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(local_50 + 0xb) = iVar2 + 1;
      if (*(int *)((long)local_50 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*local_50 + 0x28))((long *)*local_50,lVar4 + (long)(iVar2 + -5) * 8,6)
        ;
        *(int *)(puVar3 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar6 + 8) = 0;
      local_3c = 0xffffffff;
      goto LAB_02f61a00;
    }
  }
  piVar5 = (int *)(local_58 + 8);
  local_48[2] = 0;
  local_48[3] = 0;
  *local_48 = *local_48 & 0xffff0000 | local_3c & 0xffff;
  *local_48 = *local_48 & 0xffff | local_40 << 0x10;
LAB_02f61a00:
  *piVar5 = *piVar5 + local_3c;
  return;
}


