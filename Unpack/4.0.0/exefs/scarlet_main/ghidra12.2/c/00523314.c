/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00523314; name: FUN_00523314
 */


undefined8
FUN_00523314(undefined8 *param_1,undefined8 param_2,undefined1 param_3,long *param_4,
            undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_00524ad8();
  puVar2 = auVar4._0_8_;
  puVar2[2] = param_5;
  if ((auVar4._8_8_ & 0xff) != 0) {
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 0;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf;
    uVar3 = (**(code **)(*param_4 + 0x20))(param_4,*param_1);
    *puVar2 = uVar3;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
    return uVar3;
  }
  bVar1 = *(byte *)((long)puVar2 + 10);
  *(byte *)((long)puVar2 + 10) = bVar1 & 0xf0;
  if ((bVar1 >> 4 & 1) == 0) {
    return *puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x005233cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(long *)*puVar2 + 0x20))((long *)*puVar2,param_4);
  return uVar3;
}


