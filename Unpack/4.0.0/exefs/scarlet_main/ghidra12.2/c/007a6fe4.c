/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a6fe4; name: FUN_007a6fe4
 */


undefined8 FUN_007a6fe4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  local_48[0] = local_48[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  FUN_00cbd7c0(auStack_38,local_48);
  FUN_0078cb28(uVar4,auStack_38);
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_48[0] = 0;
  FUN_007935cc(local_48);
  uVar2 = local_48[0];
  lVar5 = *(long *)(param_1 + 0xc0);
  plVar3 = (long *)FUN_0079365c();
  if (5 < *(uint *)(param_1 + 200)) {
    local_48[0] = 0;
    FUN_007935cc(local_48);
    *(ulong *)(param_1 + 0xc0) = local_48[0];
    return 1;
  }
  lVar1 = 0;
  if (*plVar3 != 0) {
    lVar1 = (long)(uVar2 - lVar5) / *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x007a7070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&UNK_007a7074 + (ulong)(byte)(&DAT_03d0bf83)[*(uint *)(param_1 + 200)] * 4))
                    (lVar1);
  return uVar4;
}


