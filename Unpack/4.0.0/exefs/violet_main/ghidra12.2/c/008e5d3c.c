/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e5d3c; name: FUN_008e5d3c
 */


void FUN_008e5d3c(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (((*(char *)(*(long *)(param_3 + 0xa0) + 0x752) == '\x02') &&
      (*(char *)(param_1 + 0x35) == '\0')) && (*(char *)(param_1 + 0x34) != '\0')) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x78) + 0x174);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x358);
    if ((*(long *)(param_6 + 0x28) != 0) && (iVar2 = *(int *)(lVar3 + 8), iVar2 != -1)) {
      FUN_008f1150(param_2,iVar2,5,*(long *)(param_6 + 0x28),0x140);
    }
    FUN_008e0254(*(undefined8 *)(param_3 + 0x98),param_2,param_3,lVar3,uVar1,param_4 & 1,param_5,1);
  }
  if (*(char *)(param_1 + 0x33) == '\0') {
    return;
  }
  FUN_008e063c(*(undefined8 *)(param_3 + 0x98),param_2,param_3,param_5,param_6);
  return;
}


