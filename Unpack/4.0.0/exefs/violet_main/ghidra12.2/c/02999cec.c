/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999cec; name: FUN_02999cec
 */


void FUN_02999cec(long *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0181cac8((long)param_1 + 0x3f4);
  if (param_2 == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x108))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x110))(param_1);
    uVar3 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],0);
    uVar3 = (uVar3 & 0xffff) * (uint)*(ushort *)((long)param_1 + 0x3f4);
    uVar4 = uVar3 / 10;
    *(short *)(param_1 + 0xb) = (short)uVar4;
    uVar3 = uVar3 / 10;
    if ((uVar2 & 0xffff) < (uVar4 & 0xffff)) {
      (**(code **)(*param_1 + 0x2e8))(param_1,uVar3 - uVar2);
    }
    if (((uVar3 & 0xffff) < (uVar2 & 0xffff)) && ((uVar3 & 0xffff) < (uVar1 & 0xffff))) {
                    /* WARNING: Could not recover jumptable at 0x02999ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e0))(param_1,uVar1 - uVar3);
      return;
    }
  }
  return;
}


