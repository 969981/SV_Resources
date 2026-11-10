/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c4400; name: FUN_019c4400
 */


undefined8 FUN_019c4400(long param_1,undefined4 *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if (param_3 == '\0') {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x498) >> 3 & 1) != 0) {
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      uVar6 = 0x230;
      goto LAB_019c44a0;
    }
    uVar3 = FUN_020ff5c0();
    if (uVar3 < 10) {
      uVar4 = FUN_01a46db4(param_1);
      if ((uVar4 & 1) == 0) {
        if ((*(int *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x30) == 0) &&
           (plVar5 = (long *)FUN_020ff5cc(param_1), plVar5 != (long *)0x0)) {
          bVar1 = FUN_01a070a4(*(undefined8 *)(param_1 + 0x48));
          bVar2 = (**(code **)(*plVar5 + 0x118))(plVar5);
          if (bVar1 < bVar2) {
            uVar6 = 0x3dd;
            *(undefined8 *)(param_2 + 6) = 0;
            *(undefined8 *)(param_2 + 8) = 0;
            goto LAB_019c44a0;
          }
        }
        return 1;
      }
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      uVar6 = 0x232;
      goto LAB_019c44a0;
    }
  }
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar6 = 0x231;
LAB_019c44a0:
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = uVar6;
  *(undefined2 *)(param_2 + 1) = 0x100;
  return 0;
}


