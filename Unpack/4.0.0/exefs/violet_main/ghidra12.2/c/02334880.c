/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02334880; name: FUN_02334880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02334880(undefined8 param_1,double param_2,undefined8 param_3,byte *param_4,byte *param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_8;
  float local_4;
  
  cVar2 = DAT_04847ed8;
  if ((((1 < *param_4) ||
       (puVar4 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_28 = puVar4[1];
  uStack_30 = *puVar4;
  local_4 = (float)param_2;
  local_40[0] = param_1;
  if ((1 < *param_5) || (puVar4 = *(undefined8 **)(param_5 + 8), puVar4 == (undefined8 *)0x0)) {
    if ((DAT_04847a10 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04847a10);
      if (iVar3 != 0) {
        DAT_04847a00 = uRam0000000000000001;
        DAT_04847a08 = _DAT_00000009;
        __cxa_guard_release(&DAT_04847a10);
      }
      puVar4 = &DAT_04847a00;
    }
    else {
      puVar4 = &DAT_04847a00;
    }
  }
  local_50 = *puVar4;
  uStack_48 = puVar4[1];
  pcVar1 = FUN_02337708;
  if (cVar2 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_8 = param_6;
  FUN_02337aac(param_3,pcVar1,0,&uStack_30,local_40,&local_4,&local_50,&local_8);
  return;
}


