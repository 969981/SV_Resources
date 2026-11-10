/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eadbe8; name: FUN_01eadbe8
 */


void FUN_01eadbe8(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ushort *puVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *local_a0;
  long lStack_98;
  undefined8 local_90;
  long *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = *(ushort **)(param_1 + 0x100);
  if (puVar5 != *(ushort **)(param_1 + 0x108)) {
    do {
      uVar4 = FUN_01ea2ee8(puVar5,param_2);
      if ((uVar4 & 1) == 0) {
        puVar5 = puVar5 + 0x24;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x578);
        *(uint *)(param_1 + 0x578) = uVar2 + 1;
        local_70 = 0;
        uStack_68 = 0;
        uVar7 = (ulong)uVar2 & 0x1f;
        local_80 = 0;
        uStack_78 = 0;
        snprintf((char *)&local_80,0x20,"net_%u__%u",*puVar5 & 3,(uint)(*puVar5 >> 2));
        lVar1 = param_1 + uVar7 * 0x20;
        *(undefined8 *)(lVar1 + 0x188) = local_70;
        *(undefined8 *)(lVar1 + 400) = uStack_68;
        puVar8 = &DAT_cbf29ce484222645;
        *(ulong *)(lVar1 + 0x178) = local_80;
        *(undefined8 *)(lVar1 + 0x180) = uStack_78;
        uVar4 = local_80 & 0xff;
        if ((int)uVar4 != 0) {
          puVar8 = &DAT_cbf29ce484222645;
          pbVar6 = (byte *)(param_1 + 0x179 + uVar7 * 0x20);
          do {
            puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar4) * 0x100000001b3);
            bVar3 = *pbVar6;
            uVar4 = (ulong)bVar3;
            pbVar6 = pbVar6 + 1;
          } while (bVar3 != 0);
        }
        if (*(long *)(puVar5 + 0xc) != 0) {
          FUN_01898184();
        }
        FUN_01ea3384(puVar5 + 4);
        local_90 = 0x1f;
        local_88 = (long *)0x0;
        local_a0 = puVar8;
        lStack_98 = lVar1 + 0x178;
        FUN_0147af14(&local_a0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        puVar5 = (ushort *)FUN_01eac3cc(param_1 + 0x100,puVar5);
      }
    } while (puVar5 != *(ushort **)(param_1 + 0x108));
  }
  return;
}


