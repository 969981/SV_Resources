/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00306860; name: FUN_00306860
 */


void FUN_00306860(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = param_1 + 0xe10;
  if (param_2 < 5) {
    FUN_0030bde0(lVar1,param_2);
    FUN_0035357c(auStack_28,lVar1);
    FUN_0030bde0(param_1 + 0xe20,param_2);
    FUN_0035357c(auStack_28,param_1 + 0xe20);
    FUN_0030bde0(param_1 + 0xe30,param_2);
    FUN_0035357c(auStack_28,param_1 + 0xe30);
    return;
  }
  uVar2 = FUN_00350fb0(param_2);
  FUN_0030bde0(lVar1,uVar2);
  FUN_0035357c(auStack_28,lVar1);
  uVar2 = FUN_00350fb0(param_2);
  FUN_0030bde0(param_1 + 0xe20,uVar2);
  FUN_0035357c(auStack_28,param_1 + 0xe20);
  uVar2 = FUN_00350fb0(param_2);
  FUN_0030bde0(param_1 + 0xe30,uVar2);
  FUN_0035357c(auStack_28,param_1 + 0xe30);
  FUN_00350fd0(param_2);
  return;
}


