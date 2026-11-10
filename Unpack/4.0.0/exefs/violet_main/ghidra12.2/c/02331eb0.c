/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02331eb0; name: FUN_02331eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02331eb0(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((1 < *param_4) || (puVar4 = *(undefined8 **)(param_4 + 8), puVar4 == (undefined8 *)0x0)) {
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
  local_40 = *puVar4;
  uStack_38 = puVar4[1];
  local_30 = FUN_02333500(param_3,uVar1,uVar2,&local_40);
  *param_1 = 1;
  FUN_017085a4(param_1 + 8,local_30);
  return;
}


