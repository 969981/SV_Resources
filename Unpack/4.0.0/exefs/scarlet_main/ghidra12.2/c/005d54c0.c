/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d54c0; name: FUN_005d54c0
 */


void FUN_005d54c0(ulong *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_1[0xb];
  if (pbVar3 != (byte *)0x0) {
    if ((byte *)param_1[0xc] == pbVar3) {
      pbVar2 = pbVar3;
    }
    else {
      pbVar2 = (byte *)param_1[0xc];
      do {
        pbVar4 = pbVar2 + -0x20;
        if ((*pbVar4 & 1) != 0) {
          (**(code **)(**(long **)(pbVar2 + -8) + 0x18))
                    (*(long **)(pbVar2 + -8),*(undefined8 *)(pbVar2 + -0x10),
                     *(ulong *)(pbVar2 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar2 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar2 = (byte *)param_1[0xb];
    }
    param_1[0xc] = (ulong)pbVar3;
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],pbVar2,param_1[0xd] - (long)pbVar2,8);
  }
  if ((param_1[6] & 1) == 0) {
    FUN_01cfa410(param_1 + 4);
    bVar1 = (byte)*param_1;
  }
  else {
    (**(code **)(*(long *)param_1[9] + 0x18))
              ((long *)param_1[9],param_1[8],param_1[6] & 0xfffffffffffffffe,1);
    FUN_01cfa410(param_1 + 4);
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005d55b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


