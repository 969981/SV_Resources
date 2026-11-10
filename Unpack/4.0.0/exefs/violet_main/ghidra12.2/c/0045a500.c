/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045a500; name: FUN_0045a500
 */


ulong FUN_0045a500(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,code *param_6)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong local_50;
  undefined8 uStack_48;
  ulong local_38;
  
  if (param_5 < 0x10) {
    return 0;
  }
  if ((param_5 & 0xffffffff80000007) != 0) {
    return 0;
  }
  if (param_5 - 0x10 == 0) {
    (*param_6)(param_4,&local_50);
    local_38 = local_50;
    *param_3 = uStack_48;
    FUN_00453300(&local_50,0x10);
    lVar4 = 8;
  }
  else {
    lVar4 = param_5 - 8;
    lVar3 = FUN_0045a040(param_1,&local_38,param_3,param_4,param_5);
    if (lVar4 != lVar3) goto LAB_0045a600;
  }
  if (param_2 == 0) {
    iVar2 = FUN_003f6d80(&local_38,&DAT_03cfa5b0,4);
  }
  else {
    iVar2 = FUN_003f6d80(&local_38,param_2,4);
  }
  if ((((iVar2 == 0) &&
       (uVar1 = (local_38 & 0xff00ff0000000000) >> 8 | (local_38 & 0xff00ff00000000) << 8,
       uVar1 = ((uVar1 & 0xffff0000ffff0000) >> 0x10 | uVar1 << 0x10) >> 0x20,
       (param_5 - 0x10 & 0xfffffffffffffff8) < uVar1)) &&
      (uVar1 <= (param_5 - 8 & 0xfffffffffffffff8))) &&
     (iVar2 = FUN_003f6d80((long)param_3 + uVar1,&DAT_047f19c0,lVar4 - uVar1), iVar2 == 0)) {
    return uVar1;
  }
LAB_0045a600:
  FUN_00453300(param_3,param_5);
  return 0;
}


