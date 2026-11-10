/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d3a90; name: FUN_031d3a90
 */


void FUN_031d3a90(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (((*(byte *)(lVar4 + 0x38) & 1) != 0) && (param_1[6] != 0)) {
    puVar1 = (undefined8 *)param_1[2];
    uVar3 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)param_1[3]) && (param_1[2] = uVar3, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c4e575;
      puVar1[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
  puVar1 = (undefined8 *)param_1[2];
  uVar3 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)param_1[3]) && (param_1[2] = uVar3, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    uVar2 = nn::os::GetSystemTick();
    puVar1[1] = uVar2;
  }
  if (*(code **)(lVar4 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x031d3b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x20))(*(undefined8 *)(lVar4 + 0x28));
  return;
}


