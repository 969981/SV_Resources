/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e49c4; name: FUN_007e49c4
 */


void FUN_007e49c4(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  pcVar3 = (char *)*param_2;
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
    do {
      if (*pcVar2 == *param_3) {
        if (pcVar2 == pcVar3) {
          if (pcVar2 != (char *)param_2[1]) {
            *param_2 = *(undefined8 *)(pcVar3 + 0x30);
            goto LAB_007e4a38;
          }
          *param_2 = 0;
          param_2[1] = 0;
          lVar1 = *(long *)(pcVar2 + 0x30);
          lVar4 = *(long *)(pcVar2 + 0x38);
        }
        else if (pcVar2 == (char *)param_2[1]) {
          param_2[1] = *(undefined8 *)(pcVar2 + 0x38);
          lVar1 = *(long *)(pcVar2 + 0x30);
          lVar4 = *(long *)(pcVar2 + 0x38);
        }
        else {
LAB_007e4a38:
          lVar1 = *(long *)(pcVar2 + 0x30);
          lVar4 = *(long *)(pcVar2 + 0x38);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x30) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x38) = lVar4;
        }
        lVar4 = param_2[2];
        lVar1 = *(long *)(lVar4 + 0x20);
        if (*(long *)(lVar4 + 0x18) == 0) {
          if (lVar1 == 0) {
            pcVar2[0x20] = '\0';
            pcVar2[0x21] = '\0';
            pcVar2[0x22] = '\0';
            pcVar2[0x23] = '\0';
            pcVar2[0x24] = '\0';
            pcVar2[0x25] = '\0';
            pcVar2[0x26] = '\0';
            pcVar2[0x27] = '\0';
            pcVar2[0x28] = '\0';
            pcVar2[0x29] = '\0';
            pcVar2[0x2a] = '\0';
            pcVar2[0x2b] = '\0';
            pcVar2[0x2c] = '\0';
            pcVar2[0x2d] = '\0';
            pcVar2[0x2e] = '\0';
            pcVar2[0x2f] = '\0';
            *(char **)(lVar4 + 0x18) = pcVar2;
            goto LAB_007e4a74;
          }
        }
        else if (lVar1 != 0) {
          *(char **)(lVar1 + 0x20) = pcVar2;
          pcVar2[0x20] = '\0';
          pcVar2[0x21] = '\0';
          pcVar2[0x22] = '\0';
          pcVar2[0x23] = '\0';
          pcVar2[0x24] = '\0';
          pcVar2[0x25] = '\0';
          pcVar2[0x26] = '\0';
          pcVar2[0x27] = '\0';
          *(long *)(pcVar2 + 0x28) = lVar1;
LAB_007e4a74:
          *(char **)(lVar4 + 0x20) = pcVar2;
        }
        if (*(char **)(lVar4 + 8) == pcVar2) {
          if (*(char **)(lVar4 + 0x10) != pcVar2) {
            *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(pcVar2 + 0x10);
            goto LAB_007e4ab0;
          }
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          lVar1 = *(long *)(pcVar2 + 0x10);
          lVar4 = *(long *)(pcVar2 + 0x18);
        }
        else if (*(char **)(lVar4 + 0x10) == pcVar2) {
          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(pcVar2 + 0x18);
          lVar1 = *(long *)(pcVar2 + 0x10);
          lVar4 = *(long *)(pcVar2 + 0x18);
        }
        else {
LAB_007e4ab0:
          lVar1 = *(long *)(pcVar2 + 0x10);
          lVar4 = *(long *)(pcVar2 + 0x18);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar4;
        }
        local_28[0] = 0;
        goto LAB_007e4ac8;
      }
      pcVar2 = *(char **)(pcVar2 + 0x30);
    } while (pcVar2 != (char *)0x0);
  }
  local_28[0] = 0x2c0a;
LAB_007e4ac8:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


