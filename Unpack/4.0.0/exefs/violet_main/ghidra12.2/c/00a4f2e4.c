/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4f2e4; name: FUN_00a4f2e4
 */


void FUN_00a4f2e4(long param_1,uint param_2,long *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*param_3 != 0) {
    uVar1 = FUN_00cf44f4(*(undefined8 *)(*param_3 + 0x70));
    uVar1 = uVar1 & 0xffff;
    uVar2 = FUN_00cf41a8(*(undefined8 *)(*param_3 + 0x70));
    if ((((uVar1 < 0x402) && (uVar3 = FUN_00a4f8c0((ulong)param_2), (uVar3 & 1) != 0)) &&
        (param_2 < 3)) &&
       ((((uVar2 & 0xff) < 0x20 &&
         ((*(uint *)(param_1 + (ulong)uVar1 * 0x18 + (ulong)param_2 * 4 + 0x38) >>
           (ulong)(uVar2 & 0x1f) & 1) != 0)) &&
        (uVar3 = FUN_00a61b94(param_1 + 0x6358,param_2,uVar1), (uVar3 & 1) == 0)))) {
      FUN_00a4f9fc(param_1,0,param_2,uVar1,param_4 & 1);
      FUN_00a4f9fc(param_1,1,param_2,uVar1,param_4 & 1);
      return;
    }
  }
  return;
}


