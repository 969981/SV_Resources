/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023352b0; name: FUN_023352b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023352b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5,byte *param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_70 [2];
  undefined8 auStack_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_4;
  
  cVar2 = DAT_04847ee0;
  if ((((1 < *param_5) ||
       (puVar4 = *(undefined8 **)(param_5 + 8), *(undefined8 **)(param_5 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_28 = puVar4[1];
  uStack_30 = *puVar4;
  local_40[0] = param_1;
  if ((1 < *param_6) || (puVar4 = *(undefined8 **)(param_6 + 8), puVar4 == (undefined8 *)0x0)) {
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
  puVar1 = &LAB_02337eb4;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_70[0] = param_3;
  auStack_60[0] = param_2;
  local_4 = param_7;
  FUN_02338398(param_4,puVar1,0,&uStack_30,local_40,&local_50,&local_4,auStack_60,local_70);
  return;
}


