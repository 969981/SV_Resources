/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01974794; name: FUN_01974794
 */


undefined8 FUN_01974794(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_58 [40];
  
  cVar1 = FUN_01974854(param_1,*(undefined1 *)(param_2 + 1),*(undefined1 *)((long)param_2 + 5));
  if (cVar1 == '\0') {
    FUN_0197488c(param_1,*param_2,*(undefined1 *)(param_2 + 1),*(undefined1 *)((long)param_2 + 5),
                 *(undefined1 *)((long)param_2 + 6),param_2 + 2,*(undefined1 *)(param_2 + 0x14),
                 *(undefined1 *)((long)param_2 + 0x51));
    uVar2 = 1;
  }
  else {
    memcpy(auStack_58,param_2 + 0xb,0x24);
    if ((cVar1 == '\x02') && (uVar3 = FUN_018ce3ac(auStack_58), (uVar3 & 1) == 0)) {
      FUN_029831c8(param_1,auStack_58);
    }
    FUN_0298311c(param_1,*param_2,*(undefined1 *)(param_2 + 0x14),auStack_58);
    uVar2 = 0;
  }
  return uVar2;
}


