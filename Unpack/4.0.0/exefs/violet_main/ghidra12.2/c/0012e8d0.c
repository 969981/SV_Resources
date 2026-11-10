/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012e8d0; name: FUN_0012e8d0
 */


void FUN_0012e8d0(char *param_1,char *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (*param_2 == '@') {
    if (0x3c < param_3) {
      param_1[2] = '.';
      param_2 = param_2 + param_3;
      param_1[0] = '.';
      param_1[1] = '.';
      uVar1 = *(undefined8 *)(param_2 + -0x38);
      uVar4 = *(undefined8 *)(param_2 + -0x30);
      uVar2 = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + 0x13) = uVar2;
      *(undefined8 *)(param_1 + 0xb) = uVar4;
      *(undefined8 *)(param_1 + 3) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + -0x18);
      uVar2 = *(undefined8 *)(param_2 + -0x10);
      uVar4 = *(undefined8 *)(param_2 + -8);
      param_1[0x3b] = *param_2;
      *(undefined8 *)(param_1 + 0x33) = uVar4;
      *(undefined8 *)(param_1 + 0x2b) = uVar2;
      *(undefined8 *)(param_1 + 0x23) = uVar1;
      return;
    }
  }
  else {
    if (*param_2 != '=') {
      pcVar3 = strchr(param_2,10);
      param_1[8] = '\"';
      pcVar5 = param_1 + 9;
      *(undefined8 *)param_1 = s__string___03c820dd._0_8_;
      if ((param_3 < 0x2d) && (pcVar3 == (char *)0x0)) {
        memcpy(pcVar5,param_2,param_3);
        pcVar5 = pcVar5 + param_3;
      }
      else {
        if (pcVar3 != (char *)0x0) {
          param_3 = (long)pcVar3 - (long)param_2;
        }
        if (0x2c < param_3) {
          param_3 = 0x2d;
        }
        memcpy(pcVar5,param_2,param_3);
        pcVar5 = pcVar5 + param_3;
        pcVar5[0] = '.';
        pcVar5[1] = '.';
        pcVar5[2] = '.';
        pcVar5 = pcVar5 + 3;
      }
      pcVar5[2] = '\0';
      pcVar5[0] = '\"';
      pcVar5[1] = ']';
      return;
    }
    if (0x3c < param_3) {
      uVar1 = *(undefined8 *)(param_2 + 1);
      uVar2 = *(undefined8 *)(param_2 + 9);
      uVar4 = *(undefined8 *)(param_2 + 0x19);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x11);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 8) = uVar2;
      uVar4 = *(undefined8 *)(param_2 + 0x31);
      uVar1 = *(undefined8 *)(param_2 + 0x21);
      uVar2 = *(undefined8 *)(param_2 + 0x29);
      *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      param_1[0x3b] = '\0';
      return;
    }
  }
  memcpy(param_1,param_2 + 1,param_3);
  return;
}


