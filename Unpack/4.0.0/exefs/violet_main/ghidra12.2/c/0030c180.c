/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030c180; name: FUN_0030c180
 */


void FUN_0030c180(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  if (uVar1 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      param_2[3] = 0;
      *param_2 = 0;
      if (*(long *)(param_1 + 0xe10) == 0) {
        puVar2 = (undefined8 *)(param_1 + 0xe10);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0xe18);
      }
      *puVar2 = param_2;
      *(undefined8 **)(param_1 + 0xe18) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[3] = 0;
      *param_3 = 0;
      if (*(long *)(param_1 + 0xe20) == 0) {
        puVar2 = (undefined8 *)(param_1 + 0xe20);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0xe28);
      }
      *puVar2 = param_3;
      *(undefined8 **)(param_1 + 0xe28) = param_3;
      return;
    }
  }
  else {
    if (4 < uVar1) {
      uVar1 = FUN_00350fb0(uVar1);
    }
    FUN_0035351c(auStack_28,param_2,uVar1);
    uVar1 = *(ulong *)(param_1 + 0x40);
    if (4 < uVar1) {
      uVar1 = FUN_00350fb0(uVar1);
    }
    FUN_0035351c(auStack_30,param_3,uVar1);
  }
  return;
}


