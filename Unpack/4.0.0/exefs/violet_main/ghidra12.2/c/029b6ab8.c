/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b6ab8; name: FUN_029b6ab8
 */


void FUN_029b6ab8(float param_1,int *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_2 == 1) {
    if (0.5 < param_1) {
      memcpy(param_2 + 4,(void *)(param_3 + 0x10),0x30);
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0xe);
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    auVar1 = FUN_029b6f64(*(undefined8 *)(param_2 + 4),uVar2,uVar4,*(undefined8 *)(param_3 + 0x10),
                          *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x30));
    *(undefined1 (*) [16])(param_2 + 4) = auVar1;
    *(undefined8 *)(param_2 + 10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined8 *)(param_2 + 0xe) = uVar5;
    *(undefined8 *)(param_2 + 0xc) = uVar4;
  }
  return;
}


