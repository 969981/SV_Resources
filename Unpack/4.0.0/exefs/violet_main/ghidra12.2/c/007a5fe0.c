/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a5fe0; name: FUN_007a5fe0
 */


undefined8 FUN_007a5fe0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38 [2];
  undefined4 local_28 [2];
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    local_38[0] = CONCAT44(local_38[0]._4_4_,0x6c05);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    lVar4 = *(long *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x80) != (int)local_38[0]) {
      FUN_00cbd7c0(auStack_48,param_1 + 0x80);
      FUN_0078cb94(lVar4,auStack_48);
      goto LAB_007a6034;
    }
  }
  FUN_0078cc00(lVar4);
LAB_007a6034:
  local_38[0] = 0;
  FUN_007935cc(local_38);
  lVar4 = local_38[0];
  lVar5 = *(long *)(param_1 + 0xc0);
  plVar2 = (long *)FUN_0079365c();
  if (5 < *(uint *)(param_1 + 200)) {
    local_38[0] = 0;
    FUN_007935cc(local_38);
    *(long *)(param_1 + 0xc0) = local_38[0];
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = (lVar4 - lVar5) / *plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x007a6078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&UNK_007a607c + (ulong)(byte)(&DAT_03d0bf7d)[*(uint *)(param_1 + 200)] * 4))
                    (lVar1);
  return uVar3;
}


