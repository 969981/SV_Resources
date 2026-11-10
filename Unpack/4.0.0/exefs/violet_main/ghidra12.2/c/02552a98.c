/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02552a98; name: FUN_02552a98
 */


void FUN_02552a98(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((1 < *param_3) ||
     (puVar4 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047df530 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047df530);
      puVar4 = (undefined8 *)PTR_DAT_047df538;
      if (iVar3 != 0) {
        *(undefined8 *)(PTR_DAT_047df538 + 0x10) = 0;
        *(undefined8 *)((long)puVar4 + 0x18) = 0;
        *puVar4 = 0;
        *(undefined8 *)((long)puVar4 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047df530);
      }
    }
    else {
      puVar4 = (undefined8 *)PTR_DAT_047df538;
    }
  }
  local_28 = puVar4[3];
  local_38 = puVar4[1];
  local_40 = *puVar4;
  uStack_30 = puVar4[2];
  FUN_0255b1d8(param_2,uVar1,uVar2,&local_40);
  return;
}


