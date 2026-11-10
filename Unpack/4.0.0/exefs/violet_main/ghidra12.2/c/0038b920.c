/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b920; name: FUN_0038b920
 */


undefined8
FUN_0038b920(long *param_1,void *param_2,size_t param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = FUN_0038b710(param_2,param_3,0);
  uVar2 = param_1[1] & uVar2 & 0xffffffff;
  lVar5 = param_1[3];
  puVar4 = (undefined8 *)(lVar5 + uVar2 * 0x18);
  puVar3 = (uint *)*puVar4;
  if (puVar3 != (uint *)0x0) {
    if ((*puVar3 == param_3) &&
       ((*puVar3 == 0 || (iVar1 = memcmp(puVar3 + 1,param_2,param_3), iVar1 == 0)))) {
      *param_1 = *param_1 + -1;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(lVar5 + uVar2 * 0x18 + 8);
      }
      puVar6 = *(undefined8 **)(lVar5 + uVar2 * 0x18 + 0x10);
      if (puVar6 == (undefined8 *)0x0) {
        *puVar4 = 0;
      }
      else {
        uVar8 = puVar6[1];
        uVar7 = *puVar6;
        puVar4[2] = puVar6[2];
        puVar4[1] = uVar8;
        *puVar4 = uVar7;
        *puVar6 = 0;
      }
joined_r0x0038ba98:
      if (param_5 != (undefined8 *)0x0) {
        (*(code *)*param_5)(param_5,puVar3,0,0);
      }
      return 1;
    }
    puVar4 = (undefined8 *)(lVar5 + uVar2 * 0x18 + 0x10);
    puVar6 = (undefined8 *)*puVar4;
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (uint *)*puVar6;
      if ((*puVar3 == param_3) &&
         ((*puVar3 == 0 || (iVar1 = memcmp(puVar3 + 1,param_2,param_3), iVar1 == 0)))) {
        *param_1 = *param_1 + -1;
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = puVar6[1];
        }
        *puVar6 = 0;
        *puVar4 = puVar6[2];
        goto joined_r0x0038ba98;
      }
      puVar4 = puVar6 + 2;
      puVar6 = (undefined8 *)*puVar4;
    }
  }
  return 0;
}


