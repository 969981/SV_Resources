/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d4838; name: FUN_007d4838
 */


void FUN_007d4838(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_58 [2];
  
  uVar4 = FUN_007ec554();
  local_58[0] = (**(code **)(*param_1 + 0x18))(param_1);
  plVar5 = (long *)FUN_007e9698(uVar4,local_58);
  (**(code **)(*(long *)*plVar5 + 0x70))();
  uVar6 = (**(code **)(*(long *)*plVar5 + 0x78))();
  puVar3 = PTR_DAT_047d0860;
  do {
    if ((uVar6 & 1) != 0) {
      return;
    }
    plVar1 = (long *)0x0;
    if (*(long *)(*plVar5 + 0x50) != 0) {
      plVar1 = (long *)(*plVar5 + 0x50);
    }
    bVar2 = *(byte *)(plVar1 + 5);
    uVar8 = 1;
    if ((bVar2 & 1) != 0) {
      uVar8 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar8 = uVar8 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar8 = uVar8 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar8 = uVar8 + 8;
    }
    if (*(short *)((long)plVar1 + 0x2a) != 0) {
      bVar2 = *(byte *)(*plVar1 + (ulong)uVar8);
      lVar7 = FUN_01f7c4e8(*(undefined8 *)puVar3);
      if ((bVar2 == 5 || *(long *)(lVar7 + 0x98) != 0) && bVar2 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x007d4988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_007d48d8 + (ulong)(byte)"-38=BGMSX]"[bVar2] * 4))();
        return;
      }
    }
    (**(code **)(*(long *)*plVar5 + 0x80))();
    uVar6 = (**(code **)(*(long *)*plVar5 + 0x78))();
  } while( true );
}


