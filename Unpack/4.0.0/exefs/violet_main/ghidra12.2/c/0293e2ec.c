/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293e2ec; name: FUN_0293e2ec
 */


void FUN_0293e2ec(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_2 = 0;
  FUN_01582534();
  uVar1 = FUN_014813e4();
  uVar2 = FUN_01481400(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_014813f4(param_1,*param_3);
    uVar2 = (**(code **)(*plVar3 + 0x200))();
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_01243584(param_1);
      FUN_029842fc(uVar1,*param_3,*(undefined1 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 5),
                   *(undefined1 *)((long)param_3 + 6),*(undefined1 *)((long)param_3 + 7),
                   *(undefined1 *)(param_3 + 2),*(undefined1 *)((long)param_3 + 9),
                   *(undefined1 *)((long)param_3 + 10),*(undefined1 *)((long)param_3 + 0xb));
      *param_2 = 1;
    }
  }
  return;
}


