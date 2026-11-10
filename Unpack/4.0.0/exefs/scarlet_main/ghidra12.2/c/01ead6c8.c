/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ead6c8; name: FUN_01ead6c8
 */


void FUN_01ead6c8(long param_1,ushort *param_2)

{
  long lVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  undefined1 *local_80;
  long lStack_78;
  undefined8 local_70;
  long *local_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar7 = *(ushort **)(param_1 + 0x100);
  puVar2 = *(ushort **)(param_1 + 0x108);
  if ((puVar7 != puVar2) && (*puVar7 != *param_2)) {
    do {
      puVar7 = puVar7 + 0x24;
      if (puVar2 == puVar7) {
        puVar7 = puVar2;
        goto LAB_01ead700;
      }
    } while (*puVar7 != *param_2);
  }
LAB_01ead700:
  if (puVar2 != puVar7) {
    uVar3 = *(uint *)(param_1 + 0x578);
    *(uint *)(param_1 + 0x578) = uVar3 + 1;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puVar8 = &DAT_cbf29ce484222645;
    snprintf((char *)&local_60,0x20,"net_%u__%u",*puVar7 & 3,(uint)(*puVar7 >> 2));
    lVar1 = param_1 + ((ulong)uVar3 & 0x1f) * 0x20;
    lStack_78 = lVar1 + 0x178;
    *(undefined8 *)(lVar1 + 0x188) = local_50;
    *(undefined8 *)(lVar1 + 400) = uStack_48;
    uVar6 = local_60 & 0xff;
    *(ulong *)(lVar1 + 0x178) = local_60;
    *(undefined8 *)(lVar1 + 0x180) = uStack_58;
    if ((int)uVar6 != 0) {
      pbVar5 = (byte *)(lVar1 + 0x179);
      do {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar6) * 0x100000001b3);
        bVar4 = *pbVar5;
        uVar6 = (ulong)bVar4;
        pbVar5 = pbVar5 + 1;
      } while (bVar4 != 0);
    }
    FUN_01ea3384(puVar7 + 4);
    local_70 = 0x1f;
    local_68 = (long *)0x0;
    local_80 = puVar8;
    FUN_0147af14(&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    FUN_01eac3cc(param_1 + 0x100,puVar7);
  }
  return;
}


