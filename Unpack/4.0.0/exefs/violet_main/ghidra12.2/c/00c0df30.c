/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0df30; name: FUN_00c0df30
 */


void FUN_00c0df30(char *param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char *__s;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  char acStack_450 [1024];
  
  local_490 = *param_3;
  uStack_488 = param_3[1];
  local_480 = param_3[2];
  uStack_478 = param_3[3];
  local_470 = local_490;
  uStack_468 = uStack_488;
  local_460 = local_480;
  uStack_458 = uStack_478;
  iVar1 = vsnprintf(acStack_450,0x400,param_2,&local_490);
  if (iVar1 < 0x400) {
    if (-1 < iVar1) {
      std::string::append(param_1,(ulong)acStack_450);
    }
  }
  else {
    __s = operator_new__((long)(iVar1 + 1));
    local_4b0 = *param_3;
    uStack_4a8 = param_3[1];
    local_4a0 = param_3[2];
    uStack_498 = param_3[3];
    local_470 = local_4b0;
    uStack_468 = uStack_4a8;
    local_460 = local_4a0;
    uStack_458 = uStack_498;
    iVar2 = vsnprintf(__s,(long)(iVar1 + 1),param_2,&local_4b0);
    if ((-1 < iVar2) && (iVar2 <= iVar1)) {
      std::string::append(param_1,(ulong)__s);
    }
    operator_delete__(__s);
  }
  return;
}


