/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dda320; name: FUN_01dda320
 */


void FUN_01dda320(long param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 uint param_5,uint param_6,uint param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x1728);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1730) = 0;
    *(undefined8 *)(param_1 + 0x1738) = 0;
    *(undefined8 *)(param_1 + 0x1720) = 0;
    *(undefined8 *)(param_1 + 0x1728) = 0;
    (*pcVar1)(param_1 + 0x1740);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x1740);
    uVar2 = param_3[3];
    *(undefined8 *)(param_1 + 0x1728) = param_3[1];
    *(undefined8 *)(param_1 + 0x1738) = uVar2;
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0x1730) = param_3[2];
    *(undefined8 *)(param_1 + 0x1720) = uVar2;
  }
  FUN_01dcddfc(param_1,param_2,param_4,param_5 & 1,param_6 & 1,param_7 & 1);
  return;
}


