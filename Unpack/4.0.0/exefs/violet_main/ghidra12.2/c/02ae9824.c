/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae9824; name: FUN_02ae9824
 */


int FUN_02ae9824(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  void *__s;
  ulong uVar3;
  undefined4 local_18 [2];
  
  if (((DAT_04840858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840858), iVar1 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  local_18[0] = (undefined4)*param_1;
  plVar2 = (long *)FUN_01297c44(DAT_04840848 + 0x6e0,local_18);
  __s = (void *)*plVar2;
  uVar3 = plVar2[1] - (long)__s;
  if (uVar3 < param_3) {
    FUN_00f9e194(plVar2,param_3 - uVar3);
    __s = (void *)*plVar2;
  }
  else if (uVar3 != param_3) {
    plVar2[1] = (long)__s + param_3;
  }
  memset(__s,0,param_3);
  iVar1 = snprintf((char *)*plVar2,param_3,"%s",*(undefined8 *)(param_2 + 8));
  return iVar1;
}


