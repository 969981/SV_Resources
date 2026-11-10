/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00259b80; name: FUN_00259b80
 */


long FUN_00259b80(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (param_3 != 0) {
    pbVar8 = *(byte **)*param_2;
    bVar4 = *pbVar8;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar8 + 8);
    }
    if ((bVar4 & 1) == 0) {
      do {
        pbVar6 = (byte *)**(undefined8 **)(param_3 + 0x20);
        bVar4 = *pbVar6;
        uVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar6 + 8);
        }
        sVar3 = uVar1;
        if (uVar2 <= uVar1) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
LAB_00259c28:
          uVar5 = (uint)(uVar1 < uVar2);
          if (uVar2 < uVar1) {
            uVar5 = 0xffffffff;
          }
        }
        else {
          pbVar7 = *(byte **)(pbVar6 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          uVar5 = memcmp(pbVar7,pbVar8 + 1,sVar3);
          if (uVar5 == 0) goto LAB_00259c28;
        }
        if ((int)uVar5 >= 0) {
          param_4 = param_3;
        }
        param_3 = *(long *)(param_3 + (ulong)((int)uVar5 < 0) * 8);
      } while (param_3 != 0);
    }
    else {
      do {
        pbVar6 = (byte *)**(undefined8 **)(param_3 + 0x20);
        bVar4 = *pbVar6;
        uVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar6 + 8);
        }
        sVar3 = uVar1;
        if (uVar2 <= uVar1) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
LAB_00259bc0:
          uVar5 = (uint)(uVar1 < uVar2);
          if (uVar2 < uVar1) {
            uVar5 = 0xffffffff;
          }
        }
        else {
          pbVar7 = *(byte **)(pbVar6 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          uVar5 = memcmp(pbVar7,*(void **)(pbVar8 + 0x10),sVar3);
          if (uVar5 == 0) goto LAB_00259bc0;
        }
        if ((int)uVar5 >= 0) {
          param_4 = param_3;
        }
        param_3 = *(long *)(param_3 + (ulong)((int)uVar5 < 0) * 8);
      } while (param_3 != 0);
    }
  }
  return param_4;
}


