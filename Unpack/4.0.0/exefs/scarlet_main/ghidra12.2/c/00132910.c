/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00132910; name: FUN_00132910
 */


void FUN_00132910(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *param_2;
  lVar2 = FUN_0013be00(*(undefined8 *)(param_1 + 0x38),"break",5);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (lVar6 == lVar2) {
    uVar3 = FUN_0012e860(uVar3,"break outside loop at line %d",*(undefined4 *)((long)param_2 + 0xc))
    ;
    uVar3 = FUN_00133030(param_1,uVar3);
  }
  uVar4 = *param_2 + 0x18;
  uVar5 = *(uint *)((long)param_2 + 0xc);
  uVar3 = FUN_0012e860(uVar3,"no visible label \'%s\' for <goto> at line %d",uVar4);
  auVar7 = FUN_00133030(param_1,uVar3);
  lVar2 = auVar7._0_8_;
  uVar3 = FUN_0012e860(*(undefined8 *)(lVar2 + 0x38),
                       "<goto %s> at line %d jumps into the scope of local \'%s\'",
                       auVar7._8_8_ + 0x18,uVar4 & 0xffffffff,
                       *(long *)(**(long **)(*(long *)(*(long *)(lVar2 + 0x30) + 0x10) + 0x58) +
                                 (long)(int)(*(int *)(*(long *)(lVar2 + 0x30) + 0x38) +
                                            (uVar5 & 0xff)) * 0x18 + 0x10) + 0x18);
  FUN_00133030(lVar2,uVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x1329ec);
  (*pcVar1)();
}


