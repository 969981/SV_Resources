/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233a348; name: FUN_0233a348
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233a348(undefined8 param_1,undefined8 param_2,double param_3,undefined8 *param_4,
                 undefined8 param_5,byte *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  undefined8 auStack_30 [2];
  undefined4 local_8;
  float local_4;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  local_4 = (float)param_3;
  local_40[0] = param_2;
  auStack_30[0] = param_1;
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
  local_8 = param_7;
  FUN_0233b7b4(param_5,uVar1,uVar2,auStack_30,local_40,&local_4,&local_50,&local_8);
  return;
}


