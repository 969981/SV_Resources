/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec7214; name: FUN_01ec7214
 */


void FUN_01ec7214(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_016a48e4();
  if (lVar1 != 0) {
    pcVar2 = *(code **)(lVar1 + 0x88);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined8 *)(lVar1 + 0x98) = 0;
      *(undefined8 *)(lVar1 + 0x80) = 0;
      *(undefined8 *)(lVar1 + 0x88) = 0;
      (*pcVar2)(lVar1 + 0xa0);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar1 + 0xa0);
      uVar3 = param_1[3];
      *(undefined8 *)(lVar1 + 0x88) = param_1[1];
      *(undefined8 *)(lVar1 + 0x98) = uVar3;
      uVar3 = *param_1;
      *(undefined8 *)(lVar1 + 0x90) = param_1[2];
      *(undefined8 *)(lVar1 + 0x80) = uVar3;
    }
  }
  return;
}


