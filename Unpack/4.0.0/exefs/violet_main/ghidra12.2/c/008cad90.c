/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cad90; name: FUN_008cad90
 */


void FUN_008cad90(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == '\0') {
    lVar2 = *(long *)(param_2 + 0x88);
    if ((lVar2 != 0) && (*(long *)(param_2 + 0x80) != 0)) {
      *(long *)(lVar2 + 0x80) = *(long *)(param_2 + 0x80);
      *(undefined8 *)(*(long *)(param_2 + 0x80) + 0x88) = *(undefined8 *)(param_2 + 0x88);
      return;
    }
    if (*(char **)(param_1 + 0x150) == param_2) {
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x80);
      lVar2 = *(long *)(param_2 + 0x80);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x158) = 0;
        return;
      }
      goto LAB_008cae74;
    }
    if (*(char **)(param_1 + 0x158) == param_2) {
      *(long *)(param_1 + 0x158) = lVar2;
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x150) = 0;
        return;
      }
      goto LAB_008cae58;
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x88);
    if ((lVar2 != 0) && (*(long *)(param_2 + 0x80) != 0)) {
      *(long *)(lVar2 + 0x80) = *(long *)(param_2 + 0x80);
      *(undefined8 *)(*(long *)(param_2 + 0x80) + 0x88) = *(undefined8 *)(param_2 + 0x88);
      return;
    }
    lVar1 = *(long *)(param_2 + 0x548) + (long)*(int *)(param_2 + 0x20) * 8;
    if (*(char **)(lVar1 + 0x440) == param_2) {
      *(undefined8 *)(lVar1 + 0x440) = *(undefined8 *)(param_2 + 0x80);
      lVar2 = *(long *)(param_2 + 0x80);
      if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 0x4c0) = 0;
        return;
      }
LAB_008cae74:
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      return;
    }
    if (*(char **)(lVar1 + 0x4c0) == param_2) {
      *(long *)(lVar1 + 0x4c0) = lVar2;
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 0x440) = 0;
        return;
      }
LAB_008cae58:
      *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      return;
    }
  }
  return;
}


