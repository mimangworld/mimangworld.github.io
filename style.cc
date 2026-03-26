* {
  margin: 0;
  padding: 0;
盒模型尺寸计算方式：内容、内边距和边框的总和决定元素的尺寸
}

身体 {
字体-系列：-apple-System，“Segoe UI”字体机器人，"Helvetica Neue"Arial，无衬线；
  background-color: #f6f8fa;
颜色：#333;
  line-height: 1.6;
  padding: 20px;
}

.容器 {
  max-width: 800px;
  margin: 0 汽车;
}

.卡片 {
背景：白色；
  border-radius: 12px;
  padding: 28px;
  margin-bottom: 24px;
  box-shadow: 0 4pX12pXrgba(0,0,0,0.06);
过渡：0.2轻松；
}

.card:盘旋 {
  改变: translateY(-2pX);
}

h1 {
  font-size: 32px;
  margin-bottom: 8px;
颜色：#1a1a1a;
}

h2 {
  font-size: 22px;
  margin-bottom: 16px;
颜色：#222;
显示：弹性布局；
align-items: 居中;
  gap: 8px;
}

h2我{
颜色：#0969da;
}

.小标题 {
颜色：#666;
  font-size: 18px;
  margin-bottom: 16px;
}

/* 头部样式 */
.英雄 {
文本对齐方式：居中；
  padding: 36pX28px;
}

.阿凡达 {
  margin-bottom: 16px;
}

.avatar img {
  width: 120px;
  height: 120px;
  border-radius: 50%;
  object-fit: cover;
  border: 4px solid #f6f8fa;
  box-shadow: 0 2px 8px rgba(0,0,0,0.1);
}

.social-links {
  display: flex;
  justify-content: center;
  gap: 16px;
  margin-top: 16px;
}

.social-links a {
  width: 40px;
  height: 40px;
  border-radius: 50%;
  background: #f6f8fa;
  display: flex;
  align-items: center;
  justify-content: center;
  color: #333;
  font-size: 20px;
  transition: all 0.2s ease;
  text-decoration: none;
}

.social-links a:hover {
  background: #0969da;
  color: white;
  transform: translateY(-2px);
}

/* 技能网格 */
.skills-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(120px, 1fr));
  gap: 16px;
}

.skill-item {
  display: flex;
  flex-direction: column;
  align-items: center;
  gap: 8px;
  padding: 16px;
  background: #f6f8fa;
  border-radius: 8px;
  transition: all 0.2s ease;
}

.skill-item:hover {
  background: #eef3f8;
  transform: translateY(-2px);
}

.skill-item i {
  font-size: 32px;
  color: #0969da;
}

.skill-item span {
  font-size: 14px;
  font-weight: 500;
}

/* 项目列表 */
.projects-list {
  display: flex;
  flex-direction: column;
  gap: 20px;
}

.project-item {
  padding: 20px;
  background: #f6f8fa;
  border-radius: 8px;
  border-left: 4px solid #0969da;
}

.project-item h3 {
  font-size: 18px;
  margin-bottom: 8px;
  color: #1a1a1a;
}

.project-desc {
  color: #555;
  margin-bottom: 8px;
}

.project-tech {
  color: #0969da;
  font-size: 14px;
  margin-bottom: 12px;
}

.project-link {
  color: #0969da;
  text-decoration: none;
  font-weight: 500;
}

.project-link:hover {
  text-decoration: underline;
}

/* 链接样式 */
a {
  color: #0969da;
  text-decoration: none;
  transition: color 0.2s ease;
}

a:hover {
  color: #0550ae;
  text-decoration: underline;
}

/* 页脚 */
footer {
  text-align: center;
  margin-top: 40px;
  padding: 20px;
  color: #888;
  font-size: 14px;
}

/* 响应式适配 */
@media (max-width: 600px) {
  body {
    padding: 12px;
  }

  .card {
    padding: 20px;
    margin-bottom: 16px;
  }

  h1 {
    font-size: 26px;
  }

  h2 {
    font-size: 20px;
  }

  .skills-grid {
    grid-template-columns: repeat(2, 1fr);
  }
}
