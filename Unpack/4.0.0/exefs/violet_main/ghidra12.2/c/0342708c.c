/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342708c; name: FUN_0342708c
 */


void FUN_0342708c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  
  if (*(int *)(param_3 + 0x28) != 0) {
    cVar4 = *(char *)(param_3 + 0x19);
    puVar8 = *(undefined4 **)(param_3 + 0x20);
    *puVar8 = *param_4;
    puVar8[1] = param_4[1];
    puVar1 = (undefined4 *)0x0;
    if (cVar4 != '\0') {
      puVar1 = puVar8;
    }
    puVar8[2] = param_4[2];
    FUN_03426b48(puVar8,param_5);
    puVar8 = puVar8 + 0x58;
    if ((undefined4 *)(*(long *)(param_3 + 0x20) + (ulong)*(uint *)(param_3 + 0x28) * 0x160) !=
        puVar8) {
      do {
        *puVar8 = *param_4;
        puVar8[1] = param_4[1];
        puVar8[2] = param_4[2];
        FUN_03426b48(param_1,param_2,puVar8,param_5);
        if ((puVar1 == (undefined4 *)0x0) || (0.001 <= (float)puVar8[0x1f])) {
          uVar5 = *(uint *)(param_3 + 0x28);
          puVar8 = puVar8 + 0x58;
        }
        else {
          *(undefined4 *)(param_3 + 0x14) = 0;
          *(undefined1 *)(param_3 + 0x1b) = 0;
          puVar1[0x21] = puVar8[0x21];
          puVar1[0x22] = puVar8[0x22];
          puVar1[0x23] = puVar8[0x23];
          uVar5 = *(uint *)(param_3 + 0x28);
          if (1 < uVar5) {
            lVar6 = *(long *)(param_3 + 0x20) + (ulong)uVar5 * 0x160;
            *puVar8 = *(undefined4 *)(lVar6 + -0x160);
            puVar8[1] = *(undefined4 *)(lVar6 + -0x15c);
            puVar8[2] = *(undefined4 *)(lVar6 + -0x158);
            puVar8[3] = *(undefined4 *)(lVar6 + -0x154);
            puVar8[4] = *(undefined4 *)(lVar6 + -0x150);
            puVar8[5] = *(undefined4 *)(lVar6 + -0x14c);
            puVar8[6] = *(undefined4 *)(lVar6 + -0x148);
            puVar8[7] = *(undefined4 *)(lVar6 + -0x144);
            puVar8[8] = *(undefined4 *)(lVar6 + -0x140);
            puVar8[9] = *(undefined4 *)(lVar6 + -0x13c);
            puVar8[10] = *(undefined4 *)(lVar6 + -0x138);
            puVar8[0xb] = *(undefined4 *)(lVar6 + -0x134);
            puVar8[0xc] = *(undefined4 *)(lVar6 + -0x130);
            puVar8[0xd] = *(undefined4 *)(lVar6 + -300);
            puVar8[0xe] = *(undefined4 *)(lVar6 + -0x128);
            puVar8[0xf] = *(undefined4 *)(lVar6 + -0x124);
            puVar8[0x10] = *(undefined4 *)(lVar6 + -0x120);
            puVar8[0x11] = *(undefined4 *)(lVar6 + -0x11c);
            puVar8[0x12] = *(undefined4 *)(lVar6 + -0x118);
            puVar8[0x13] = *(undefined4 *)(lVar6 + -0x114);
            puVar8[0x14] = *(undefined4 *)(lVar6 + -0x110);
            puVar8[0x15] = *(undefined4 *)(lVar6 + -0x10c);
            puVar8[0x16] = *(undefined4 *)(lVar6 + -0x108);
            puVar8[0x17] = *(undefined4 *)(lVar6 + -0x104);
            puVar8[0x18] = *(undefined4 *)(lVar6 + -0x100);
            puVar8[0x19] = *(undefined4 *)(lVar6 + -0xfc);
            puVar8[0x1a] = *(undefined4 *)(lVar6 + -0xf8);
            puVar8[0x1b] = *(undefined4 *)(lVar6 + -0xf4);
            puVar8[0x1c] = *(undefined4 *)(lVar6 + -0xf0);
            puVar8[0x1d] = *(undefined4 *)(lVar6 + -0xec);
            uVar2 = *(undefined8 *)(lVar6 + -0xe8);
            uVar3 = *(undefined8 *)(lVar6 + -0xe0);
            uVar7 = *(undefined8 *)(lVar6 + -0xd8);
            puVar8[0x24] = *(undefined4 *)(lVar6 + -0xd0);
            *(undefined8 *)(puVar8 + 0x1e) = uVar2;
            *(undefined8 *)(puVar8 + 0x20) = uVar3;
            *(undefined8 *)(puVar8 + 0x22) = uVar7;
            memcpy(puVar8 + 0x25,(void *)(lVar6 + -0xcc),200);
            uVar5 = *(uint *)(param_3 + 0x28);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(param_3 + 0x28) = uVar5;
        }
      } while ((undefined4 *)(*(long *)(param_3 + 0x20) + (ulong)uVar5 * 0x160) != puVar8);
    }
  }
  return;
}


