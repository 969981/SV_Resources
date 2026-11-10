/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00532550; name: FUN_00532550
 */


void FUN_00532550(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char *__s;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  char acStack_440 [1024];
  
  uStack_478 = param_3[1];
  local_480 = *param_3;
  uStack_468 = param_3[3];
  uStack_470 = param_3[2];
  local_460 = local_480;
  uStack_458 = uStack_478;
  uStack_450 = uStack_470;
  uStack_448 = uStack_468;
  iVar1 = vsnprintf(acStack_440,0x400,param_2,&local_480);
  if (iVar1 < 0x400) {
    if (-1 < iVar1) {
      FUN_0021d540(param_1,acStack_440,iVar1);
    }
  }
  else {
    __s = (char *)FUN_0049e7b0(PTR_FUN_047cba38,(long)(iVar1 + 1));
    uStack_498 = param_3[1];
    local_4a0 = *param_3;
    uStack_488 = param_3[3];
    uStack_490 = param_3[2];
    local_460 = local_4a0;
    uStack_458 = uStack_498;
    uStack_450 = uStack_490;
    uStack_448 = uStack_488;
    iVar2 = vsnprintf(__s,(long)(iVar1 + 1),param_2,&local_4a0);
    if ((-1 < iVar2) && (iVar2 <= iVar1)) {
      FUN_0021d540(param_1,__s,iVar2);
    }
    if (__s != (char *)0x0) {
      FUN_0049e800(__s);
      FUN_0049e7e0(PTR_LAB_047cba48,__s);
    }
  }
  return;
}


