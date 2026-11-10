/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00805070; name: FUN_00805070
 */


void FUN_00805070(undefined8 param_1,long *param_2,undefined1 *param_3,undefined4 *param_4,
                 uint param_5)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_5c [4];
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if ((param_3 != (undefined1 *)0x0) && (param_4 != (undefined4 *)0x0)) {
    uVar5 = (**(code **)(*param_2 + 0x20))();
    if (uVar5 <= param_5) {
      *param_3 = (char)param_2[1];
      uVar7 = (param_2[2] & 0xff00ff00ff00ff00U) >> 8 | (param_2[2] & 0xff00ff00ff00ffU) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_3 + 1) = uVar7 >> 0x20 | uVar7 << 0x20;
      plVar2 = param_2 + 4;
      uVar7 = (param_2[3] & 0xff00ff00ff00ff00U) >> 8 | (param_2[3] & 0xff00ff00ff00ffU) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_3 + 9) = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar4 = FUN_0078a478(plVar2);
      plVar3 = param_2 + 8;
      param_3[0x11] = uVar4;
      uVar4 = FUN_0078a478(plVar3);
      param_3[0x12] = uVar4;
      param_3 = param_3 + 0x13;
      FUN_0078ae9c(local_58,plVar2,param_3,auStack_5c,param_5);
      uVar7 = FUN_0078a478(plVar2);
      FUN_0078ae9c(local_58,plVar3,param_3 + (uVar7 & 0xffffffff),auStack_5c,param_5);
      uVar8 = FUN_0078a478(plVar3);
      puVar1 = (ulong *)(param_3 + (uVar7 & 0xffffffff) + (uVar8 & 0xffffffff));
      uVar7 = (param_2[0xc] & 0xff00ff00ff00ff00U) >> 8 | (param_2[0xc] & 0xff00ff00ff00ffU) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *puVar1 = uVar7 >> 0x20 | uVar7 << 0x20;
      *(char *)(puVar1 + 1) = (char)param_2[0xd];
      *(undefined1 *)((long)puVar1 + 9) = *(undefined1 *)((long)param_2 + 0x69);
      memcpy((undefined1 *)((long)puVar1 + 10),(void *)((long)param_2 + 0x6a),1);
      uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
      *param_4 = uVar6;
      local_58[0] = 0;
      goto LAB_008051a4;
    }
  }
  local_58[0] = 0x10407;
LAB_008051a4:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


