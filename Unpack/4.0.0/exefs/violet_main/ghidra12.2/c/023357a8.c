/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023357a8; name: FUN_023357a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023357a8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,byte *param_7,byte *param_8,
                 undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_70 [2];
  undefined8 auStack_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_8;
  float local_4;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  if ((((1 < *param_7) ||
       (puVar4 = *(undefined8 **)(param_7 + 8), *(undefined8 **)(param_7 + 8) == (undefined8 *)0x0))
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
  if ((1 < *param_8) || (puVar4 = *(undefined8 **)(param_8 + 8), puVar4 == (undefined8 *)0x0)) {
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
  local_70[0] = param_4;
  auStack_60[0] = param_3;
  local_8 = param_9;
  FUN_02338a38(param_6,uVar1,uVar2,&uStack_30,local_40,&local_4,&local_50,&local_8,auStack_60,
               local_70);
  return;
}


