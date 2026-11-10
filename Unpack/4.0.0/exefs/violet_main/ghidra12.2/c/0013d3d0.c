/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013d3d0; name: FUN_0013d3d0
 */


undefined8 * FUN_0013d3d0(undefined8 param_1,double *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_0013d060(param_1,*(undefined1 *)(param_2 + 1),param_2);
  if (param_3 == 0) {
    do {
      cVar3 = *(char *)(param_2 + 1);
      if (cVar3 == *(char *)((long)puVar5 + 9)) {
        switch(cVar3) {
        case '\0':
        case '\x01':
        case '\x11':
          goto switchD_0013d45c_caseD_0;
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\a':
        case '\b':
        case '\t':
        case '\n':
        case '\v':
        case '\f':
        case '\r':
        case '\x0e':
        case '\x0f':
        case '\x10':
        case '\x12':
        case '\x14':
        case '\x15':
        case '\x16':
switchD_0013d4f8_caseD_2:
          if (*param_2 == (double)puVar5[2]) {
            return puVar5;
          }
          break;
        case '\x13':
          if (*param_2 == (double)puVar5[2]) {
            return puVar5;
          }
          break;
        default:
          if (cVar3 != 'T') goto switchD_0013d4f8_caseD_2;
          iVar4 = FUN_0013b870(*param_2,puVar5[2]);
          if (iVar4 != 0) {
            return puVar5;
          }
        }
      }
      piVar1 = (int *)((long)puVar5 + 0xc);
      puVar5 = puVar5 + (long)*piVar1 * 3;
    } while (*piVar1 != 0);
  }
  else {
    do {
      bVar2 = *(byte *)(param_2 + 1);
      if (bVar2 == *(byte *)((long)puVar5 + 9)) {
        switch(bVar2) {
        case 0:
        case 1:
        case 0x11:
          goto switchD_0013d45c_caseD_0;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x12:
        case 0x14:
        case 0x15:
        case 0x16:
switchD_0013d45c_caseD_2:
          if (*param_2 == (double)puVar5[2]) {
            return puVar5;
          }
          break;
        case 0x13:
          if (*param_2 == (double)puVar5[2]) {
            return puVar5;
          }
          break;
        default:
          if (bVar2 != 0x54) goto switchD_0013d45c_caseD_2;
          iVar4 = FUN_0013b870(*param_2,puVar5[2]);
          if (iVar4 != 0) {
            return puVar5;
          }
        }
      }
      else if (((bVar2 >> 6 & 1) != 0) && (*(byte *)((long)puVar5 + 9) == 0xb))
      goto switchD_0013d45c_caseD_2;
      piVar1 = (int *)((long)puVar5 + 0xc);
      puVar5 = puVar5 + (long)*piVar1 * 3;
    } while (*piVar1 != 0);
  }
  puVar5 = &DAT_03cb6488;
switchD_0013d45c_caseD_0:
  return puVar5;
}


