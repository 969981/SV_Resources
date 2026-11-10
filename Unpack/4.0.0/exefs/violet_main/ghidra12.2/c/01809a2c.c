/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01809a2c; name: FUN_01809a2c
 */


void FUN_01809a2c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined1 local_4 [4];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_4[0] = param_3;
  if ((((1 < *param_4) ||
       (puVar4 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = (undefined8 *)PTR_DAT_047d3ba0,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  local_28 = *puVar4;
  FUN_01809ae8(param_2,uVar1,uVar2,local_4,&local_28);
  return;
}


