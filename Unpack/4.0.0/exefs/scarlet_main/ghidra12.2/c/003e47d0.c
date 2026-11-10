/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e47d0; name: FUN_003e47d0
 */


void FUN_003e47d0(undefined8 ***param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 local_40;
  undefined8 ***local_38;
  
  uVar4 = (uint)*param_2;
  uVar1 = uVar4 & 0x1000;
  if ((uVar4 >> 0xc & 1) != 0) {
    local_38 = param_1;
    param_1 = &local_38;
  }
  if ((*param_2 & 6) == 0) {
    FUN_003e4570(param_1,param_2[4],uVar1);
  }
  else {
    ppuVar5 = *param_1;
    iVar2 = FUN_0047e430(ppuVar5);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        local_40 = FUN_0047e450(ppuVar5,iVar2);
        FUN_003e4570(&local_40,param_2[4],uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0047e430(ppuVar5);
      } while (iVar2 < iVar3);
    }
    FUN_0047db00(ppuVar5);
    *param_1 = (undefined8 **)0x0;
  }
  return;
}


