/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123c8a0; name: FUN_0123c8a0
 */


void FUN_0123c8a0(long param_1,long *param_2,undefined4 *param_3,long *param_4,int param_5)

{
  void *__s;
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void *__src;
  undefined1 local_68 [8];
  void *local_48;
  
  uVar3 = param_5 - 3U >> 1 | (param_5 - 3U) * -0x80000000;
  *param_2 = 0;
  *param_3 = 0;
  if (0x25 < uVar3) {
    return;
  }
  switch(uVar3) {
  case 0:
  case 4:
    FUN_0124bd5c(param_1,param_2,param_3);
    return;
  default:
    goto switchD_0123c904_caseD_1;
  case 2:
    FUN_0123e08c(param_1,param_2,param_3);
    return;
  case 3:
    *param_2 = param_1 + 0xc468;
    uVar6 = 4;
    break;
  case 6:
    FUN_012513ec(param_1,param_2,param_3);
    return;
  case 7:
    FUN_0123dca8(param_1,param_2,param_3,param_4);
    return;
  case 8:
    FUN_01253e38(param_1,param_2,param_3,param_4);
    return;
  case 9:
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    do {
      uVar2 = (&DAT_03d6abe6)[lVar9];
      puVar4 = (undefined1 *)FUN_010af09c(lVar8);
      lVar9 = lVar9 + 4;
      *puVar4 = uVar2;
    } while (lVar9 != 0x340);
    __s = (void *)(param_1 + 0x58);
    memset(__s,0,0x5060);
    __src = *(void **)(param_1 + 0x40);
    memcpy(__s,__src,0x238);
    local_48 = __src;
    FUN_0123e3d0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x1760),local_68,
                 &local_48);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x68);
    *(uint *)(param_1 + 0x290) = uVar3;
    memcpy((void *)(param_1 + 0x294),(void *)(*(long *)(param_1 + 0x10) + 0x70),(ulong)uVar3);
    *param_2 = (long)__s;
    *param_3 = 0x5060;
    *param_4 = *param_4 + 1;
    *(undefined1 *)(param_1 + 0xc4a5) = local_68[0];
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[6] = 0;
    puVar7[8] = 0;
    puVar7[10] = 0;
    puVar7[0xc] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    puVar7[0x16] = 0;
    puVar7[0x18] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x20] = 0;
    puVar7[0x22] = 0;
    puVar7[0x24] = 0;
    puVar7[0x26] = 0;
    puVar7[0x28] = 0;
    puVar7[0x2a] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x30] = 0;
    puVar7[0x32] = 0;
    puVar7[0x34] = 0;
    puVar7[0x36] = 0;
    puVar7[0x38] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3e] = 0;
    puVar7[0x40] = 0;
    puVar7[0x42] = 0;
    puVar7[0x44] = 0;
    *(undefined1 *)((long)puVar7 + 0x234) = 0;
    *(undefined4 *)(puVar7 + 0x46) = 0;
    return;
  case 10:
    FUN_012457f4(param_1,param_2,param_3,param_4);
    return;
  case 0xb:
    FUN_01253cb0(param_1,param_2,param_3,param_4);
    return;
  case 0xc:
    FUN_01250ee0(param_1,param_2,param_3,param_4);
    return;
  case 0xd:
    FUN_01250adc(param_1,param_2,param_3,param_4);
    return;
  case 0xe:
    FUN_01253fc0(param_1,param_2,param_3,param_4);
    return;
  case 0xf:
  case 0x22:
    *param_2 = 0;
    *param_3 = 0;
    return;
  case 0x10:
    FUN_01253350(param_1,param_2,param_3,param_4);
    return;
  case 0x11:
    FUN_0124c220(param_1,param_2,param_3,param_4);
    return;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    *param_2 = *(long *)(param_1 + 0x48);
    uVar6 = 6;
    break;
  case 0x1d:
    FUN_01250c58(param_1,param_2,param_3);
    return;
  case 0x24:
    puVar5 = (undefined4 *)FUN_0123dca0(*(undefined8 *)(param_1 + 0x30));
    uVar6 = puVar5[1];
    uVar1 = puVar5[2];
    *(undefined1 *)(param_1 + 0xc4a0) = (char)*puVar5;
    *(char *)(param_1 + 0xc4a1) = (char)uVar6;
    *(char *)(param_1 + 0xc4a2) = (char)uVar1;
    *param_2 = param_1 + 0xc4a0;
    uVar6 = 3;
    break;
  case 0x25:
    FUN_012534c0(param_1,param_2,param_3,param_4);
    return;
  }
  *param_3 = uVar6;
switchD_0123c904_caseD_1:
  return;
}


