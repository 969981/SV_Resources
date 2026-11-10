/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00126e50; name: FUN_00126e50
 */


undefined8 FUN_00126e50(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30);
  if ((int)(uVar4 >> 4) < 0xf4241) {
    uVar2 = (uint)(uVar4 >> 3) & 0xfffffffe;
    if (999999 < (int)uVar2) {
      uVar2 = 1000000;
    }
    uVar1 = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x30)) >> 4) + param_2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
    if ((int)uVar1 < 0xf4241) {
      uVar3 = FUN_00126ce0(param_1,uVar1,param_3);
      return uVar3;
    }
    FUN_00126ce0(param_1,0xf4308,param_3);
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"stack overflow");
    }
  }
  else if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(param_1,5);
  }
  return 0;
}


