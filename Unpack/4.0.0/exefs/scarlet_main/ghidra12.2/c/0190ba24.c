/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190ba24; name: FUN_0190ba24
 */


void FUN_0190ba24(undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined4 param_5,
                 byte *param_6)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_8;
  
  cVar2 = DAT_04804328;
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_8 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_8 = 0;
  }
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_28 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_28 = 0;
  }
  if ((*param_4 == '\x01') || (*param_4 == '\0')) {
    local_30 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_30 = 0;
  }
  local_34 = param_5;
  if ((((1 < *param_6) ||
       (puVar4 = *(undefined8 **)(param_6 + 8), *(undefined8 **)(param_6 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = (undefined8 *)PTR_DAT_047d3ba0,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  local_40 = *puVar4;
  puVar1 = PTR_FUN_047d40c0;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0190bb58(param_1,puVar1,0,&local_8,&local_28,&local_30,&local_34,&local_40);
  return;
}


